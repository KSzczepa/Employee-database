#include <gtest/gtest.h>
#include "employee.hpp"
#include "database.hpp"


TEST(CheckStructure, CanAddEmployee) {
    Employee adam {"Adam", "Kowalsko", "ul. Dluga 15, 45-030 Opole", 123497, "11223300558", Gender::Male};

    Database db;
    EXPECT_TRUE(db.add(adam));
    EXPECT_FALSE(db.add(adam));
}