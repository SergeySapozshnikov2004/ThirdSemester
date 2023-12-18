#include "one_d_arr.h"
#include "one_d_arr.cpp"
#include <iostream>
#include <cstddef>

int main()
{
    one_d_arr arr1 = one_d_arr(4);
    for (size_t i = 0; i < 4; i++)
    {
        std::cout << arr1[i] << std::endl; 
    }
    return 0;
}