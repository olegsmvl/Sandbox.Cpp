/*
2. Таймер с ожиданием

Задача:
Сделай цикл, который раз в 500 миллисекунд печатает "tick".

👉 Отрабатывается: sleep_for.
*/
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    cout << "tick" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));
  }

  return 0;
}
