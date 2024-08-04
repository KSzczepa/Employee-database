#pragma once
#include "employee.hpp"

class Database {
public:
    bool add(const Employee & empl);
private:
    bool isAdded_ = false;
};