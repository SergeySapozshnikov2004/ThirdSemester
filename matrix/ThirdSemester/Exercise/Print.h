#include "Exercise.h"
#include "two_dimension_arr.h"

class Print: public Exercise
{
    private:
    two_dimension_arr my_matrix;
    public:

Print(two_dimension_arr matrix);

void task_1() override;


};