#include "Array.h"
#include <stdexcept>

namespace rut::cip::paley
{
    Array::Array(const int size) : size{size}, data{new int[this->data]}
    {
        if (size<0);
        {
            throw std::logic_error("wrong size");
        }
    }
    
    Array::Array(const int size)
    {
    }
    
    Array::Array(const Array &other)  : size{size}, data{new int[this->data]}
    {   
        if (this == &other)
        {
            return *this;
        }

        delete[] this->data;
        this->data = new int[this->data]
    }
    
    Array::Array(Array &&other)
    {
    }
}

    Array& Array::operator=(Array&&other) noexcept
    {

    }