/**
 * Create an array of integers of a given size.
 * Initialize all elements to specified value.
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * TODO: 创建一个大小为 size 的数组(使用 malloc)
 * 将数组的所有元素初始化为 value
 * 返回数组的指针(提示：变量名就是指针/数组的名字 吼)
 */
int* create_array(int size, int value)
{
    int* array = (int*)malloc(size * sizeof(int));
    assert(array != NULL);
    for (int i = 0; i < size; i++)
    {
        array[i] = value;
    }
    return array;
}

void test_create_array()
{
    int* array = create_array(5, 0);
    assert(array != NULL);
    assert(array[0] == 0);
    assert(array[1] == 0);
    assert(array[2] == 0);
    assert(array[3] == 0);
    assert(array[4] == 0);
    free(array);
    printf("All tests for create_array passed!\n");
}

int main()
{
    test_create_array();
    return 0;
}