#include "../logic.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <memory>

using ::testing::_;
using ::testing::AllOf;
using ::testing::Eq;
using ::testing::Field;
using ::testing::NiceMock;
using ::testing::Pointee;
using ::testing::Return;

class LogicMock : public Logic {
public:
  LogicMock() {
    ON_CALL(*this, method_b()).WillByDefault(Return(5));
    ON_CALL(*this, method_c(_)).WillByDefault(Return(44));
    ON_CALL(*this, method_d(_)).WillByDefault(Return(55));
    ON_CALL(*this, method_e(_)).WillByDefault(Return(57));
    ON_CALL(*this, method_f(_)).WillByDefault(Return(37));
  }

  MOCK_METHOD(void, method_a, (), (final));
  MOCK_METHOD(int, method_b, (), (final));
  MOCK_METHOD(int, method_c, (int), (final));
  MOCK_METHOD(int, method_d, (int *), (final));
  MOCK_METHOD(int, method_e, (Unit *), (final));
  MOCK_METHOD(int, method_f, (Unit &), (final));
};

class MyClassTest : public ::testing::Test {
protected:
  void SetUp() override { mc = std::make_unique<MainClass>(logic); }

  NiceMock<LogicMock> logic;
  std::unique_ptr<MainClass> mc;
};

TEST_F(MyClassTest, DoingA) {
  EXPECT_CALL(logic, method_a()).Times(1);
  mc->exec_a();
}

TEST_F(MyClassTest, DoingB) {
  EXPECT_CALL(logic, method_b()).WillOnce(Return(40));

  int result = mc->exec_b();

  EXPECT_EQ(result, 40);
}

TEST_F(MyClassTest, DoingC) {
  EXPECT_CALL(logic, method_c(_)).WillOnce(Return(75));
  int result = mc->exec_c(10);

  EXPECT_EQ(result, 75);
}

TEST_F(MyClassTest, DoingCcheckIn) {
  EXPECT_CALL(logic, method_c(10)).WillOnce(Return(75));
  int result = mc->exec_c(10);

  EXPECT_EQ(result, 75);
}

TEST_F(MyClassTest, DoingD) {
  EXPECT_CALL(logic, method_d(Pointee(Eq(7)))).WillOnce(Return(75));
  int num = 7;
  int result = mc->exec_d(&num);

  EXPECT_EQ(result, 75);
}

TEST_F(MyClassTest, DoingE) {

  EXPECT_CALL(logic, method_e(_)).WillOnce(Return(75));
  Unit u{4, 45};
  Unit *up = &u;
  int result = mc->exec_e(up);

  EXPECT_EQ(result, 75);
}

TEST_F(MyClassTest, DoingEinCheck) {

  EXPECT_CALL(logic, method_e(Pointee(AllOf(Field(&Unit::id, Eq(4)),
                                            Field(&Unit::num, Eq(45))))))
      .WillOnce(Return(75));

  Unit u{4, 45};
  Unit *up = &u;
  int result = mc->exec_e(up);

  EXPECT_EQ(result, 75);
}

TEST_F(MyClassTest, DoingFinCheck) {

  EXPECT_CALL(logic, method_f(AllOf(Field(&Unit::id, Eq(7)),
                                    Field(&Unit::num, Eq(47)))))
      .WillOnce(Return(75));

  Unit u{7, 47};
  int result = mc->exec_e(u);

  EXPECT_EQ(result, 75);
}
