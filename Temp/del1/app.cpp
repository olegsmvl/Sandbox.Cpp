#include <chrono>
#include <iostream>


int main() {
  // Запускаем таймер
  auto start = std::chrono::high_resolution_clock::now();

  // Здесь размещаем код, время выполнения которого необходимо измерить
  int sum = 0;
  for (int i = 0; i < 1000000; ++i) {
    sum += i;
  }
  std::cout << "Sum: " << sum << std::endl;

  // Останавливаем таймер
  auto end = std::chrono::high_resolution_clock::now();

  // Рассчитываем и выводим затраченное время
  std::chrono::duration<double, std::milli> duration = end - start;
  std::cout << "Time taken: " << duration.count() << " ms" << std::endl;

  return 0;
}
