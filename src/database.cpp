#include "database.hpp"
#include <iostream>

void Database::add(const Employee &empl)
{
    employees_.push_back(empl);
};

void Database::display(void)
{
    std::cout << show() << std::endl;
};

std::string Database::show(void) {
    std::string result = "";
    for (auto && empleyee : employees_) {
        result += empleyee.show();
    }
    return result;
};