#include <chrono>
#include <functional>
#include <iostream>
#include <thread>

using namespace std;

class Timer {
public:
  void start(std::function<void()> func, int period) {
    thr = std::thread([func, period]() {
      while (1) {
        std::this_thread::sleep_for(std::chrono::milliseconds(period));
        func();
      }
    });
  }

private:
  std::thread thr;
};

void performTask() {
  // Simulate some work
  std::cout << "Task performed at: "
            << std::chrono::duration_cast<std::chrono::milliseconds>(
                   std::chrono::system_clock::now().time_since_epoch())
                   .count()
            << " ms" << std::endl;
}

void callFunctionPeriodically(int interval) {
  using std::chrono::milliseconds;
  using std::chrono::system_clock;

  milliseconds period(interval);

  auto next = system_clock::now() + period;
  while (true) {   // Use an appropriate condition for stopping
    performTask(); // The task you want to perform periodically

    std::this_thread::sleep_until(next);
    next += period;
  }
}

int i = 0;

void func() { cout << "call " << i++ << endl; }

int main() {
  int interval = 2000; // Interval in milliseconds
  std::thread periodicCaller(callFunctionPeriodically, interval);
  Timer timer;
  timer.start(func, 300);

  periodicCaller
      .join(); // In practical use, you might handle threads differently

  return 0;
}
