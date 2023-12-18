#include "Exercise.h"
#include "two_dimension_arr.h"
#include "Print.h"

Print::Print(two_dimension_arr matrix): my_matrix(matrix){}

void Print::task_1()
{
    size_t num_rows = my_matrix.get_num_rows();
    size_t num_columns = my_matrix.get_num_columns();
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

