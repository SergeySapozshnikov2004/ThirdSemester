#include "Generator.h"
#include <iostream>

class ManualGenerator: public Generator
{
    private:
    std::istream& in;
    public:

ManualGenerator(std::istream& in = std::cin); 

int generate() override;
};