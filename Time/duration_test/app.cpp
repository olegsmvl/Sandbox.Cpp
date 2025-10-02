/*
1. Засечь время выполнения

Задача:
Напиши программу, которая считает время работы функции sleep_for(2s) и выводит
результат в миллисекундах.

👉 Отрабатывается: steady_clock::now(), duration_cast.
*/
#include <chrono>
#include <iostream>
#include <thread>

using namespace std;

int main() {
  cout << "start" << endl;
  auto start = chrono::steady_clock::now();
  this_thread::sleep_for(chrono::milliseconds(540));
  auto stop = chrono::steady_clock::now();

  double duration = chrono::duration<double>(stop - start).count();
  cout << duration << endl;
  cout << "end" << endl;

  return 0;
}
