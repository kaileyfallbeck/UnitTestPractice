/**
 * Unit Tests for Password class
 **/

#include <gtest/gtest.h>

#include "Password.h"

class PracticeTest : public ::testing::Test {
 protected:
  PracticeTest() {}           // constructor runs before each test
  virtual ~PracticeTest() {}  // destructor cleans up after tests
  virtual void SetUp() {}     // sets up before each test (after constructor)
  virtual void TearDown() {}  // clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password) {
  Password my_password;
  int actual = my_password.count_leading_characters("Z");
  ASSERT_EQ(1, actual);
}

TEST(PasswordTest, several_letter_password) {
  Password my_password;
  int actual = my_password.count_leading_characters("aaaaa");
  ASSERT_EQ(5, actual);
}

TEST(PasswordTest, space_password) {
  Password my_password;
  int actual = my_password.count_leading_characters(" ");
  ASSERT_EQ(1, actual);
}

TEST(PasswordTest, between_password) {
  Password my_password;
  int actual = my_password.count_leading_characters("555 5555");
  ASSERT_EQ(8, actual);
}

TEST(PasswordTest, empty_password) {
  Password my_password;
  int actual = my_password.count_leading_characters("");
  ASSERT_EQ(0, actual);
}

TEST(PasswordTest, empty_password) {
  Password my_password;
  int actual = my_password.has_mixed_characters("Aaaa");
  ASSERT_EQ(true, actual);
}

TEST(PasswordTest, empty_password) {
  Password my_password;
  int actual = my_password.has_mixed_characters("fibusgr");
  ASSERT_EQ(false, actual);
}

TEST(PasswordTest, empty_password) {
  Password my_password;
  int actual = my_password.has_mixed_characters("uuuuGttthhh");
  ASSERT_EQ(true, actual);
}

TEST(PasswordTest, empty_password) {
  Password my_password;
  int actual = my_password.has_mixed_characters("@#$!%*$");
  ASSERT_EQ(false, actual);
}