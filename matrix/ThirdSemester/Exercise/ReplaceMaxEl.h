#include "Exercise.h"
#include "two_dimension_arr.h"

class ReplaceMaxEl: public Exercise
{
    private:
    two_dimension_arr my_matrix;
    public:

ReplaceMaxEl(two_dimension_arr matrix);

void task_1() override;


};