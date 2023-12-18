#include "ReplaceMaxEl.h"

ReplaceMaxEl::ReplaceMaxEl(two_dimension_arr matrix): my_matrix(matrix){}

void ReplaceMaxEl::task_1()
{
    int num_rows = my_matrix.get_num_rows();
    int num_columns = my_matrix.get_num_columns();
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
