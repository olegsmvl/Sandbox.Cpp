#include <gtest/gtest.h>
#include "my_class.hpp"

class MyClassTest: public ::testing::Test{
  protected:
  void SetUp() override{

  }

  void TearDown() override{}

  MyClass mc;
};

TEST_F(MyClassTest, Adding) {

  
  int result = mc.add(2,3);

  EXPECT_EQ(result, 5);
}