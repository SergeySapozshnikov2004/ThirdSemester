class Generator
#include "two_d_arr.h"
{
    friend class two_d_arr;
    private:
    int user_value;

    public:

/**
 * @brief Construct a new Modificator object
 * 
 * @param user_value 
 */
Generator(int user_value);

/**
 * @brief Destroy the Modificator object
 * 
 */
~Generator();

/**
 * @brief 
 * 
 */
void random_fill_arr();

/**
 * @brief 
 * 
 */
void manual_input_arr();

};