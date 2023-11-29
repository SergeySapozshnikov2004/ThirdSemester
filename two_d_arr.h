#include "one_d_arr.h"
#include "one_d_arr.cpp"

class two_d_arr
{
    friend class one_d_arr;
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
two_d_arr(int num_rows, int num_columns);

/**
 * @brief Destroy the two d arr object
 * 
 */
~two_d_arr();

/**
 * @brief Construct a new Array object
 * 
 * @param arr 
 */
two_d_arr(const two_d_arr& matrix);

/**
 * @brief 
 * 
 */
two_d_arr(two_d_arr&& other) noexcept;

two_d_arr operator=(const two_d_arr &other);

two_d_arr operator=(two_d_arr &&other) noexcept;

friend void swap(two_d_arr& lha, two_d_arr& rha);

size_t *two_d_arr::operator[](int num_rows);
};