#include "../logic.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <memory>

using ::testing::_;
using ::testing::AllOf;
using ::testing::DoAll;
using ::testing::Eq;
using ::testing::Field;
using ::testing::Invoke;
using ::testing::NiceMock;
using ::testing::Pointee;
using ::testing::Return;
using ::testing::SaveArg;

class LogicMock : public Logic {
public:
  LogicMock() {
    ON_CALL(*this, method_b()).WillByDefault(Return(5));
    ON_CALL(*this, method_c(_)).WillByDefault(Return(44));
    ON_CALL(*this, method_d(_)).WillByDefault(Return(55));
    ON_CALL(*this, method_e(_)).WillByDefault(Return(57));
    ON_CALL(*this, method_reference(_)).WillByDefault(Return(37));
  }

  MOCK_METHOD(void, method_a, (), (final));
  MOCK_METHOD(int, method_b, (), (final));
  MOCK_METHOD(int, method_c, (int), (final));
  MOCK_METHOD(int, method_d, (int *), (final));
  MOCK_METHOD(int, method_e, (Unit *), (final));
  MOCK_METHOD(int, method_reference, (Unit &), (final));
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

  EXPECT_CALL(logic, method_reference(AllOf(Field(&Unit::id, Eq(7)),
                                            Field(&Unit::num, Eq(47)))))
      .WillOnce(Return(75));

  Unit u{7, 47};
  int result = mc->exec_f(u);

  EXPECT_EQ(result, 75);
}

TEST_F(MyClassTest, DoingsetValueInFunc) {

  Unit u_set;

  ON_CALL(logic, method_reference(_)).WillByDefault(Invoke([](Unit &value) {
    value.id = 42;
    value.num = 47;
    return 76;
  }));

  int result = mc->update();

  EXPECT_EQ(result, 47);
}

TEST_F(MyClassTest, DoingsetValueInFuncExternal) {

  Unit u_set{42, 47};

  ON_CALL(logic, method_reference(_))
      .WillByDefault(Invoke([&u_set](Unit &value) {
        value = u_set;
        return 76;
      }));

  int result = mc->update();

  EXPECT_EQ(result, 47);
}

TEST_F(MyClassTest, GetCallingFuncAtribute) {

  Unit saved_unit;

  ON_CALL(logic, method_reference(_))
      .WillByDefault(DoAll(SaveArg<0>(&saved_unit), Return(48)));

  int result = mc->update();

  EXPECT_EQ(saved_unit.id, 1);
  EXPECT_EQ(saved_unit.num, 2);

  EXPECT_EQ(result, 2);
}
