#include "employee.hpp"

Employee::Employee(std::string name,
    std::string lastName,
    std::string address,
    int number,
    std::string function,
    Gender gender
    ) {};

std::string Employee::show(void) {
    return name_ + " " + lastName_ + "; " + address_ + "; " + std::to_string(number_) + "; " + function_ + "; " + gender_;
};