#pragma once
#include <string>
#include "gender.hpp"

class Employee
{
public:
    Employee(std::string name,
             std::string lastName,
             std::string address,
             int number,
             std::string function,
             Gender gender) : name_(name), lastName_(lastName), address_(address), number_(number), function_(function), gender_(gender) {};
    std::string show(void);

private:
    std::string name_;
    std::string lastName_;
    std::string address_;
    int number_;
    std::string function_;
    Gender gender_;
};
