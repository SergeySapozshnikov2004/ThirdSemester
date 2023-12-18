#include "two_d_arr.h"
#include "one_d_arr.h"
#include <cstddef>

two_d_arr::two_d_arr(int num_rows, int num_columns)
{
    if (num_rows <= 0 || num_columns <= 0)
    {
        throw std::logic_error("Размер должен быть положительным");
    }
    num_rows = static_cast<size_t>(num_rows);
    num_columns = static_cast<size_t>(num_columns);
    this->num_rows = num_rows;
    this->num_columns = num_columns;
    my_matrix = new size_t*[num_rows];
    for (size_t i = 0; i < num_rows; i++)
    {
        my_matrix[i] = one_d_arr(num_columns).my_arr;
    }
}

two_d_arr::~two_d_arr()
{
    for (auto i = 0; i < num_rows; i++)
    {
        delete[] my_matrix[i];
    }
    delete[] this->my_matrix;
}

two_d_arr::two_d_arr(const two_d_arr &matrix)
{
    this->num_rows = matrix.num_rows;
    this->num_columns = matrix.num_columns;
    this->my_matrix = new size_t*[num_rows];   
    for (int i = 0; i < num_rows; ++i)
    {
        this->my_matrix[i] = one_d_arr(num_rows).my_arr;
        for (int j = 0; j < num_columns; ++j)
        {
            this->my_matrix[i][j] = matrix.num_columns;
        }
    }
}

two_d_arr::two_d_arr(two_d_arr &&other)
{

}

two_d_arr two_d_arr::operator=(const two_d_arr &other)
{
        if (this == &other)
    {
        return *this;
    }
    num_rows = other.num_rows;
    num_columns = other.num_columns;
    my_matrix = other.my_matrix;
    return *this;
}

two_d_arr two_d_arr::operator=(two_d_arr &&other)
{
    return ;
}
