#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "calculator.hpp"


class AdderMock: public Adder {
 public:
  MOCK_METHOD(int, add, (int a, int b), ());
};  

class CalculatorTest: public ::testing::Test{
  protected:
  void SetUp() override{
    adder_ = new AdderMock();
    calculator.add_solver(adder_);
  }

  void TearDown() override{}

  AdderMock* adder_;
  Calculator calculator;
};

TEST_F(CalculatorTest, Adding) {

  
  int result = calculator.calc(2,3);

  EXPECT_EQ(result, 5);
}