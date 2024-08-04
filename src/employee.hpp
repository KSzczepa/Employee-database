#pragma once
#include <string>
#include "database.hpp"

enum class Gender {
    Male,
    Female
};

class Employee {
public:
    Employee(std::string name,
            std::string lastName,
            std::string address,
            int number,
            std::string pesel,
            Gender gender
            );
};
