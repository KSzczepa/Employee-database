#include "database.hpp"
#include <iostream>

bool Database::add(const Employee &empl)
{
    if (isAdded_)
    {
        return false;
    }
    else
    {
        isAdded_ = true;
        return true;
    }
    // return !isAdded_;
};

void Database::display(void)
{
    std::cout << show() << std::endl;
};

std::string Database::show(void) {
    return "";
};