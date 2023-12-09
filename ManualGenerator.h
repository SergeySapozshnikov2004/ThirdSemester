#include "Generator.h"
#include <iostream>

class ManualGenerator: public Generator
{
    private:
    public:

void generate() override;

/// @brief 
/// @param in 
/// @return 
std::istream& operator >> (std::istream& in);

/// @brief 
/// @return 
float ManualGenerator::get_user_value();
};