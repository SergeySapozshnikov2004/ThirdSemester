class Vector
{
    private:
    int size = 10;
    int* myArray = new int[size];
    
    public:
    Vector()
    {
        ;
    }

    ~Vector()
    {
        delete[] myArray;
    }

};