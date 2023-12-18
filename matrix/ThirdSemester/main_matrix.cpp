#include <iostream>
#include "Generator.h"
#include "one_dimension_arr.h"
#include "two_dimension_arr.h"

enum class arrayInputChoice
{
    random,
    manual
};

int main()
{
    two_dimension_arr test_arr = two_dimension_arr(3, 3);
    
    static_cast<int>(arrayInputChoice::random);
    static_cast<int>(arrayInputChoice::manual);
    int choice;
    std::cin >> choice;
    const auto chosen = static_cast<arrayInputChoice>(choice);
    switch (chosen)
    {
        case arrayInputChoice::random:

        
        for (size_t i = 0; i < test_arr.get_num_rows(); ++i)
        {
            for(size_t j = 0; j < test_arr.get_num_columns(); j++)
            {
                RandomGenerator rnd = RandomGenerator(-50, 50);
                test_arr[i][j] =  rnd.generate();
            }
        }
        break;

        case arrayInputChoice::manual:
        for (size_t i = 0; i < test_arr.get_num_rows(); ++i)
        {
            for(size_t j = 0; j < test_arr.get_num_columns(); j++)
            {
                ManualGenerator user_input = ManualGenerator();
                test_arr[i][j] =  user_input.generate();
            }
        }
        break;
        
        default:
        throw std::logic_error("Необходимо ввести либо -0- либо -1-");
    }





    return 0;
}