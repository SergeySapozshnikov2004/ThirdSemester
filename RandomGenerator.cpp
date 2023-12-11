#include "RandomGenerator.h"
#include <random>

void RandomGenerator::generate()
{
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<> distrib(-50, 50);
    user_value = distrib(gen);  
}

float RandomGenerator::get_user_value()
{
    return user_value;
}
