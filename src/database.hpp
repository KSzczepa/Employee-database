#pragma once
#include "employee.hpp"

class Database {
public:
    bool add(const Employee & empl);
    void display(void);
    std::string show(void);
private:
    bool isAdded_ = false;
};