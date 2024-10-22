#include <condition_variable>
#include <iostream>
#include <mutex>
#include <queue>
#include <thread>

std::queue<int> taskQueue; // Общая очередь задач
std::mutex queueMutex;     // Мьютекс для защиты очереди
std::condition_variable condition; // Условная переменная для синхронизации
bool stopProcessing = false; // Флаг завершения работы

// Поток обработки задач
void taskProcessor() {
  while (true) {
    std::unique_lock<std::mutex> lock(queueMutex);
    condition.wait(lock, [] {
      return !taskQueue.empty() || stopProcessing;
    }); // Ожидаем, пока очередь не заполнится

    if (stopProcessing && taskQueue.empty()) {
      break; // Завершаем работу, если работы больше нет
    }

    int task = taskQueue.front(); // Получаем задачу
    taskQueue.pop(); // Удаляем задачу из очереди
    lock.unlock();   // Освобождаем мьютекс

    // Обрабатываем задачу (например, просто выводим её)
    std::cout << "Обработка задачи: " << task << std::endl;
  }
}

// Поток генерации задач
void taskGenerator(int numTasks) {
  for (int i = 1; i <= numTasks; ++i) {
    std::this_thread::sleep_for(
        std::chrono::milliseconds(100)); // Имитация задержки
    {
      std::lock_guard<std::mutex> lock(queueMutex);
      taskQueue.push(i); // Добавляем задачу в очередь
    }
    condition.notify_one(); // Уведомляем один поток об изменении
  }

  // Уведомляем об окончании работы
  {
    std::lock_guard<std::mutex> lock(queueMutex);
    stopProcessing = true;
  }
  condition.notify_all(); // Уведомляем все потоки, что больше задач не будет
}

int main() {
  std::thread processor(taskProcessor); // Поток, обрабатывающий задачи
  std::thread generator(taskGenerator, 10); // Поток, генерирующий 10 задач

  generator.join(); // Ожидаем завершения генерации задач
  processor.join(); // Ожидаем завершения обработки задач

  std::cout << "Все задачи обработаны!" << std::endl;
  return 0;
}
