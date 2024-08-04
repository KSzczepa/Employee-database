#include "database.hpp"

bool Database::add(const Employee & empl) {
    if (isAdded_) {
        return false;
    }
    else {        
        isAdded_ = true;
        return true;
    }
    // return !isAdded_;
};