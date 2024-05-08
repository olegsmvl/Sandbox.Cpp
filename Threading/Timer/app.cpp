#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

#define _GLIBCXX_HAS_GTHREADS

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

int main() {
  int interval = 2000; // Interval in milliseconds
  std::thread periodicCaller(callFunctionPeriodically, interval);
  periodicCaller
      .join(); // In practical use, you might handle threads differently

  return 0;
}
