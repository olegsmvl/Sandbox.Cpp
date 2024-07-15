#include "../logic.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <memory>

using ::testing::NiceMock;
using ::testing::Return;
using ::testing::_;

class LogicMock : public Logic{
public:
  LogicMock()
  {
    ON_CALL(*this, method_b()).WillByDefault(Return(5));
    ON_CALL(*this, method_c(_)).WillByDefault(Return(25));
  }

   MOCK_METHOD(void, method_a, (), (final));
   MOCK_METHOD(int, method_b, (), (final));
   MOCK_METHOD(int, method_c, (int), (final));
};

class MyClassTest : public ::testing::Test {
protected:
  void SetUp() override { mc = std::make_unique<MainClass>(logic); }

  NiceMock<LogicMock> logic;
  std::unique_ptr<MainClass>  mc;
};

TEST_F(MyClassTest, Doing) {

  int result = mc->exec();

  EXPECT_EQ(result, 5);
}