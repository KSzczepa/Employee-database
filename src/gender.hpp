#include <iostream>

enum class Gender
{
    Male,
    Female
};

std::ostream& operator<<(std::ostream& os, const Gender& gender); 

std::string genderToString(const Gender& gender);