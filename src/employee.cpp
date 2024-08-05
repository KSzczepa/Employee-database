#include "employee.hpp"

// Employee::Employee(std::string name,
//     std::string lastName,
//     std::string address,
//     int number,
//     std::string function,
//     Gender gender
//     ) : name_(name), lastName_(lastName), address_(address), number_(number), function_(function), gender_(gender) {};

std::string Employee::show(void) {
    return name_ + " " + lastName_ + "; " + address_ + "; " + std::to_string(number_) + "; " + function_ + "; " + genderToString(gender_);
};