

namespace calc_ns {
class Calculator {
public:
  int sqare(int num) { return num * num; };
  static void callback(int num);
};

Calculator calc_instance;
} // namespace calc