#include <stdio.h>
#include <assert.h>

int add(int a, int b)
{
    return a + b;
}

void test_add()
{
    assert(add(1, 2) == 3);
    assert(add(1, -1) == 0);
    assert(add(0, 0) == 0);
    printf("All tests passed for addition.\n");
}

int multiply(int a, int b)
{
    return a * b;
}

void test_multiply()
{
    assert(multiply(2, 2) == 4);
    assert(multiply(-2, 2) == -4);
    assert(multiply(0, 2) == 0);
    printf("All tests for multiplication passed.\n");
}

int main()
{
    test_add();
    printf("Welcome to the simple calculator!\n");
    printf("Please enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    printf("%d * %d = %d\n", a, b, multiply(a, b));
    return 0;
}