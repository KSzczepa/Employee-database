#include "gender.hpp"

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

std::string genderToString(const Gender& gender) {
    switch (gender) {
        case Gender::Male:
            return "Male";
        case Gender::Female:
            return "Female";
        default:
            return "Unknown";
    }
}