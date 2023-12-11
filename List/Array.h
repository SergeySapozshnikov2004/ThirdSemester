#pragma once
namespace rut::cip::paley
{
    class Array
    {
        private:
        size_t size;
        int* data;
        
        public:
        Array(const int size);
        Array(const Array& other);
        Array(Array&& other);

    };
}