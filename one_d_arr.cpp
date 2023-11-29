#include "one_d_arr.h"
#include <iostream>
#include <stdexcept>


one_d_arr::one_d_arr(int num_el)
{
    if (num_el <= 0)
    {
        throw std::logic_error("Размер должен быть положительным");
    }
    num_el = static_cast<size_t>(num_el);
    my_arr = new size_t[num_el];
}

one_d_arr::~one_d_arr()
{
    delete[] my_arr;
}


one_d_arr::one_d_arr(const one_d_arr& arr): one_d_arr(arr.num_el)
{
    this->num_el = arr.num_el;
    this->my_arr = new size_t[num_el];   
    for (size_t i = 0; i < num_el; ++i)
    {
            this->my_arr[i] = arr.my_arr[num_el];
    }
}

one_d_arr one_d_arr::operator=(const one_d_arr &other)
{
    if (this == &other)
    {
        return *this;
    }
    one_d_arr n_arr(other);
    swap(*this, n_arr);
    return *this;
}

one_d_arr::one_d_arr(one_d_arr &&other) noexcept
{
    swap(*this, other); 
}
one_d_arr one_d_arr::operator=(one_d_arr &&other) noexcept
{
    if (this == &other)
    {
        return *this;
    }
    delete[] my_arr;
    swap(*this, other);
    return *this;
}

int one_d_arr::operator[](int index)
{
    return my_arr[index];
}

void swap(one_d_arr& lha, one_d_arr& rha)
{
    std::swap(lha.my_arr, rha.my_arr);    
    std::swap(lha.num_el, rha.num_el);    
}