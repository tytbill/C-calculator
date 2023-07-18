/**
 * find-min-pointer-answer.c
 * Find the minimum number in an array.
 */
#include <assert.h>
#include <stdio.h>

/**
 * TODO: 用指针实现找最小值
 * 将数组 array 中的最小值赋值给 min
 */
void find_min(int* array, int length, int* min) // TODO: 里面的参数是你来写哦
{
    *min = array[0];
    for (int i = 1; i < length; i++)
    {
        if (array[i] < array[i - 1])
            *min = array[i];
    }
}

void test_find_min()
{
    int array[] = {5, 2, 9, 1, 7};
    int min = 0;
    find_min(array, 5, &min);
    assert(min == 1);
    printf("All tests for find_min passed!\n");
}

int main()
{
    test_find_min();
    // 可以现在 main 里面测试着写着，然后再写 function
    int array[] = {5, 2, 9, 1, 7};
    int min = 0;
    // min 一开始设置为 0
    // 遍历数组，如果有比 min 小的，就把 min 设置为那个数

    return 0;
}