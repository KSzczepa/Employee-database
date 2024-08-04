#pragma once
#include <string>
#include "database.hpp"

enum class Gender
{
    Male,
    Female
};

class Employee
{
public:
    Employee(std::string name,
             std::string lastName,
             std::string address,
             int number,
             std::string pesel,
             Gender gender);
    std::string show(void);

private:
    std::string name_;
    std::string lastName_;
    std::string address_;
    int number_;
    std::string pesel_;
    Gender gender_;
};
