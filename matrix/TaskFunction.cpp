#include "TaskFunction.h"
#include <iostream>

void TaskFunction::print()
{
    int num_rows = two_d_arr::num_rows;
    int num_columns = two_d_arr::num_columns;
    int** my_matrix = two_d_arr::my_matrix;
    std::cout << "Ваш массив : \n";
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_columns; j++)
        {
            std::cout << my_matrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

void TaskFunction::replace_max_el()
{
    int num_rows = two_d_arr::num_rows;
    int num_columns = two_d_arr::num_columns;
    int** my_matrix = two_d_arr::my_matrix;
    for (auto i = 0; i < num_rows; i++)
        {
        int num_el = 0;
        for (auto j = 1; j < num_columns; j++)
            {   
            if (my_matrix[i][j] > my_matrix[i][num_el])
                {
                num_el = j;
                }
            }
    my_matrix[i][num_el] = 0;
    }
}

int **TaskFunction::arr_insert_zeros()
{
    int num_rows = two_d_arr::num_rows;
    int num_columns = two_d_arr::num_columns;
    int** my_matrix = two_d_arr::my_matrix;
    int new_num_rows = num_rows; 
        for (int i = 0; i < num_rows; i++)
        {
            if(my_matrix[i][0] % 3 == 0)
            {
                new_num_rows += 1;
            }
        }

    int** new_arr = new int*[new_num_rows];
    for (int k = 0; k < new_num_rows; k++)
    {
        new_arr[k] = new int[num_columns];
    }
    
    size_t i_rem = 0; 
    for (size_t i = 0; i < num_rows; i++)
    {
        if (my_matrix[i][0] % 3 == 0)
            {
                for(int k = 0; k < num_columns; k++)
                {
                    new_arr[i_rem][k] = 0;
                    new_arr[i_rem + 1][k] = new_arr[i][k];                    
                }
                i_rem++;
            }
            else
            {
                for(size_t k = 0; k < num_columns; k++)
                {
                    new_arr[i_rem][k] = new_arr[i][k];
                }
            }
            i_rem++;    
    }
    return new_arr;
}
