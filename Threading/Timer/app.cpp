#include <chrono>
#include <functional>
#include <iostream>
#include <thread>

using namespace std;

class Timer {
public:
  // Timer() { thr = std::thread(func); }

  void periodic_call(std::function<void()> func, int priod) {
    while (1) {
      func();
      std::this_thread::sleep_for(std::chrono::milliseconds(priod));
    }
  }

  void start(std::function<void()> func, int period) {
    auto f = std::bind(periodic_call, func, period);
    thr = std::thread(f);
  }

private:
  std::thread thr;
  std::function<void()> func_;
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

void func() {
  int i = 0;
  while (1) {
    cout << "call " << i++ << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
  }
}

int main() {
  int interval = 2000; // Interval in milliseconds
  std::thread periodicCaller(callFunctionPeriodically, interval);
  Timer timer;
  timer.start(func, 50);

  periodicCaller
      .join(); // In practical use, you might handle threads differently

  return 0;
}
