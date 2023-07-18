/**
 * add-pointer.c
 * Add two numbers using pointers.
 */
#include <assert.h>
#include <stdio.h>

/**
 * TODO: 用指针实现加法
 * 将 a 和 b 的和赋值给 c
 */
void add_pointer(int* a, int* b, int* c)
{
    *c = *a + *b;
}

void test_add_pointer()
{
    int a = 1;
    int b = 2;
    int c = 0;
    add_pointer(&a, &b, &c);
    assert(c == 3);
    printf("All tests passed!\n");
}

int main()
{
    test_add_pointer();
    return 0;
}