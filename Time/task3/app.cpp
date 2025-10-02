/*
3. Замер разницы во времени

Задача:
Напиши код, который запоминает lastTime = steady_clock::now(), а потом в цикле
каждые 200 мс печатает, сколько миллисекунд прошло с прошлого раза.

👉 Отрабатывается: «сколько времени прошло с момента Х».
*/
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

int main() {
  auto last_time = chrono::steady_clock::now();

  for (int i = 0; i < 10; i++) {

    this_thread::sleep_for(chrono::milliseconds(200));
    auto now = chrono::steady_clock::now();
    auto duration =
        chrono::duration_cast<chrono::milliseconds>(now - last_time);
    cout << duration.count() << endl;
  }

  return 0;
}
