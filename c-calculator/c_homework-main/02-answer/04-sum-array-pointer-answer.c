#include <assert.h>
#include <stdio.h>

void sum_array(int* array, int length, int* result)
{
    *result = 0;
    for (int i = 0; i < length; i++)
    {
        *result += array[i];
    }
}

void test_sum_array()
{
    int array[] = {1, 2, 3, 4, 5};
    int result = 0;
    sum_array(array, 5, &result);
    assert(result == 15);
    printf("All tests for sum_array passed!\n");
}

int main()
{
    test_sum_array();
    return 0;
}