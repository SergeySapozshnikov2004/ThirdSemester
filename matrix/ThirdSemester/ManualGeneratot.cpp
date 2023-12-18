#include <iostream>
#include "ManualGenerator.h"

ManualGenerator::ManualGenerator(std::istream &in): in{in}{}

int ManualGenerator::generate()
{ 
    int value = 0; 
    this->in >> value; 
    return value; 
} 

