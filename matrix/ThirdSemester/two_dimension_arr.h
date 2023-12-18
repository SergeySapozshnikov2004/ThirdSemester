#include "one_dimension_arr.h"
#include "one_dimension_arr.cpp"

class two_dimension_arr
{
    friend class one_dimension_arr;
    private:
    size_t num_rows;
    size_t num_columns;
    size_t **my_matrix;

    public:

/**
 * @brief Construct a new two d arr object
 * 
 * @param num_rows 
 * @param num_columns 
 */
two_dimension_arr(int num_rows, int num_columns);

/**
 * @brief Destroy the two d arr object
 * 
 */
~two_dimension_arr();

/**
 * @brief Construct a new Array object
 * 
 * @param arr 
 */
two_dimension_arr(const two_dimension_arr& matrix);

size_t get_num_rows();

size_t get_num_columns();


/**
 * @brief 
 * 
 */
two_dimension_arr(two_dimension_arr&& other) noexcept;

two_dimension_arr operator=(const two_dimension_arr &other);

two_dimension_arr operator=(two_dimension_arr &&other) noexcept;

friend void swap(two_dimension_arr& lha, two_dimension_arr& rha);

size_t *two_dimension_arr::operator[](int num_rows);
};