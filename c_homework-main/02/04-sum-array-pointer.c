/**
 * sum_array.c
 * Sum an array of integers.
 */
#include <assert.h>
#include <stdio.h>

/**
 * TODO: 对数组求和
 * 将数组 array 中的所有元素相加，结果赋值给 result
 */
void sum_array(int* array, int len, int* result) // TODO: 里面的参数是你来写哦
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("array[i]的值是: %d\n", array[i]);
        *result += array[i];
        printf("*result的值是: %d\n", *result);
    }
}

void test_sum_array()
{
    int array[] = {1, 2, 3, 4, 5};
    int result = 0;
    sum_array(array, 5, &result);
    assert(result == 15); // 1 + 2 + 3 + 4 + 5 = 15
    printf("All tests for sum_array passed!\n");
}

int main()
{
    test_sum_array();
    return 0;
}