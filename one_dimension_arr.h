#pragma once
#include <cstddef>


class one_dimension_arr
{
    private:
    size_t num_el;
    size_t *my_arr;
    int choice_value;

    public:
    
one_dimension_arr(int num_el);

/**
 * @brief Инициализирует пустой массив
 * 
 */
one_dimension_arr(int num_el, int choice_value);

/**
 * @brief Уничтожает массив
 * 
 */
~one_dimension_arr();

/**
 * @brief Construct a new one d arr::one d arr object
 * 
 * @param arr 
 */
one_dimension_arr(const one_dimension_arr &arr);

/**
 * @brief Construct a new one d arr::one d arr object
 * 
 * @param other 
 */
one_dimension_arr(one_dimension_arr&& other) noexcept;

/**
 * @brief 
 * 
 * @param other 
 * @return one_d_arr& 
 */
one_dimension_arr operator=(const one_dimension_arr &other);

/**
 * @brief 
 * 
 * @param other 
 * @return one_d_arr& 
 */
one_dimension_arr operator=(one_dimension_arr &&other) noexcept;

int operator[](int index);


friend void swap(one_dimension_arr& lha, one_dimension_arr& rha);
};