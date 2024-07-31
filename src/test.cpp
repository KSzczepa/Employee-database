#include <gtest/gtest.h>
#include "employee.hpp"
#include "database.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
  EXPECT_STRNE("hello", "world");
  // Expect equality.
  EXPECT_EQ(7 * 6, 42);
}

TEST(ChechStructure, CanAddEmployee) {
    Empl adam {"Adam", "Kowalsko", "ul. Dluga 15, 45-030 Opole", 123497, "11223300558", Gender::Male}

    Database db;
    db.add(adam);
}