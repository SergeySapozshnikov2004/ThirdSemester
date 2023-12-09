#include <iostream>
#include "ManualGenerator.h"


void ManualGenerator::generate()
{
    float parameter;
    std::cin >> parameter;
    user_value = parameter;
}



std::istream &ManualGenerator::operator>>(std::istream &in)
{
    float parameter;
    in >> parameter;
    return in;
}

float ManualGenerator::get_user_value()
{
    return user_value;
}
