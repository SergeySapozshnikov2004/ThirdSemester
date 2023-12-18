#include "Exercise.h"
#include "two_dimension_arr.h"

class ArrayInsertZeros: public Exercise
{
    private:
    two_dimension_arr my_matrix;
    public:

ArrayInsertZeros(two_dimension_arr matrix);

size_t** task_2() override;


};