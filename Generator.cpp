#include "Generator.h"
#include "one_dimension_arr.h"
#include <iostream>
#include <random>


Generator::Generator()
{
    if (user_value == 0 or user_value == 1)
    static_cast<int>(arrayInputChoice::MANUAL);
    static_cast<int>(arrayInputChoice::RANDOM);
    switch(user_value)
    {
        case arrayInputChoice::RANDOM:
        parameter = random_fill_arr();
        break;
        case arrayInputChoice::MANUAL:
        parameter =  manual_input_arr();
        break;
        default:
    }
    
}

Generator::~Generator(){}

int Generator::random_fill_arr()
{
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<> distrib(-50, 50);
    return distrib(gen);  
}

std::istream& operator >> (std::istream& in, Generator& parameter)
{
    in >> parameter;
    return in;
}

int Generator::manual_input_arr()
{
    std::cin >> parameter;
    return parameter;
}
