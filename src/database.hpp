#pragma once
#include "employee.hpp"
#include <vector>

class Database {
public:
    void add(const Employee & empl);
    void display(void);
    std::string show(void);
private:
    std::vector<Employee> employees_;
};