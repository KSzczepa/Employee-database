#include <iostream>

enum class Gender
{
    Male,
    Female
};

std::ostream& operator<<(std::ostream& os, const Gender& gender) {
    switch (gender) {
        case Gender::Male:
            os << "Male";
            break;
        case Gender::Female:
            os << "Female";
            break;
        default:
            os << "Unknown";
            break;
    }
    return os;
}