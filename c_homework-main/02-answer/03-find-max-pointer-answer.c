#include <assert.h>
#include <stdio.h>

/**
 * TODO: 用指针实现比较大小
 * 将 a 和 b 中较大的数赋值给 max
 */
void find_max_pointer(int* a, int* b, int* max)
{
    if (*a > *b)
    {
        *max = *a;
    }
    else
    {
        *max = *b;
    }
}

void test_find_max_pointer()
{
    int a = 1;
    int b = 2;
    int max = 0;
    find_max_pointer(&a, &b, &max);
    assert(max == 2);
    printf("All tests passed!\n");
}

int main()
{
    test_find_max_pointer();
    return 0;
}