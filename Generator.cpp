#include "Generator.h"
#include "two_d_arr.h"
#include <iostream>
#include <random>


Generator::Generator(int user_value)
{
    switch(user_value)
    {
        case 1:
        random_fill_arr();
        break;
        case 2:
        manual_input_arr();
        break;
        default:
        std::cout << "Ошибка - неверный ввод\n";
    }
    
}

Generator::~Generator(){}

void Generator::random_fill_arr()
{
    std::random_device random;
    std::mt19937 gen(random());
    std::uniform_int_distribution<> distrib(-50, 50);
    int num_rows = two_d_arr::num_rows;
    int num_columns = two_d_arr::num_columns;
    int** my_matrix = two_d_arr::my_matrix;
    for (auto i = 0; i < num_rows; i++)
    {    
        for (auto j = 0; j < num_columns; j++)
        {
            my_matrix[i][j] = distrib(gen);
        }
    }
}


void Generator::manual_input_arr()
{
    int num_rows = two_d_arr::num_rows;
    int num_columns = two_d_arr::num_columns;
    int** my_matrix = two_d_arr::my_matrix;
    for (auto i = 0; i < num_rows; i++)
    {   
        std::cout << "Для " << i + 1 << " строки:\n";
        for (auto j = 0; j < num_columns; j++)
        {
            std::cout << "Введите " << j + 1 << " Элемент: "; 
            std::cin >> my_matrix[i][j];    
        }
        std::cout << "\n";
    }
}
