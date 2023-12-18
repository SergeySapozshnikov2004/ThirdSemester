#include "one_d_arr.h"
#include <iostream>

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


one_d_arr::one_d_arr(const one_d_arr& arr)
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
    num_el = other.num_el;
    my_arr = other.my_arr;
    return *this;
}

one_d_arr::one_d_arr(one_d_arr &&other)
{
    num_el = other.num_el;
    my_arr = other.my_arr;
    other.my_arr = nullptr;
    other.num_el = 0;
}
one_d_arr one_d_arr::operator=(one_d_arr &&other)
{
    if (this == &other)
    {
        return *this;
    }
    delete[] my_arr;
    num_el = other.num_el;
    my_arr = other.my_arr;
    return *this;
}

int one_d_arr::operator[](int index)
{
    return my_arr[index];
}
