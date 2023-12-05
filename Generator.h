class Generator
#include "one_dimension_arr.h"
{
    friend class one_dimension_arr;
    private:
    enum class arrayInputChoice
    {
    MANUAL,
    RANDOM
    };
    int user_value;
    int parameter;

    public:


/**
 * @brief Construct a new Modificator object
 * 
 * @param user_value 
 */
Generator();

/**
 * @brief Destroy the Modificator object
 * 
 */
~Generator();

/**
 * @brief 
 * 
 */
int random_fill_arr();

/**
 * @brief 
 * 
 */
int manual_input_arr();



};