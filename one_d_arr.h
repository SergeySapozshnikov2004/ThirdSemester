#pragma once
#include <cstddef>


class one_d_arr
{
    private:
    size_t num_el;
    size_t *my_arr;

    public:
    
/**
 * @brief Инициализирует массив
 * 
 */
one_d_arr(int num_el);

/**
 * @brief Уничтожает массив
 * 
 */
~one_d_arr();

/**
 * @brief Construct a new one d arr::one d arr object
 * 
 * @param arr 
 */
one_d_arr(const one_d_arr &arr);

/**
 * @brief Construct a new one d arr::one d arr object
 * 
 * @param other 
 */
one_d_arr(one_d_arr&& other) noexcept;

/**
 * @brief 
 * 
 * @param other 
 * @return one_d_arr& 
 */
one_d_arr operator=(const one_d_arr &other);

/**
 * @brief 
 * 
 * @param other 
 * @return one_d_arr& 
 */
one_d_arr operator=(one_d_arr &&other) noexcept;

int operator[](int index);

friend void swap(one_d_arr& lha, one_d_arr& rha);
};