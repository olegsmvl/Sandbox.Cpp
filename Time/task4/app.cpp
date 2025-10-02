/*
4. Ограничитель вызова (простейший throttler)

Задача:
Напиши функцию void throttle(int minIntervalMs), которая пропускает вызов только
если прошло больше minIntervalMs миллисекунд с прошлого вызова, иначе ждёт.

👉 Отрабатывается: базовый «ограничитель частоты» через разницу во времени.
*/
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

void throttle(int min_interval_ms) {
  static auto last_call = chrono::steady_clock::now();
  auto now = chrono::steady_clock::now();
  auto interval =
      chrono::duration_cast<chrono::milliseconds>(now - last_call).count();
  if (interval < min_interval_ms) {
    this_thread::sleep_for(chrono::milliseconds(min_interval_ms - interval));
  }
  last_call = chrono::steady_clock::now();
}

int main() {
  for (int i = 0; i < 10; i++) {
    throttle(500);
    cout << "tick" << endl;
  }

  return 0;
}
