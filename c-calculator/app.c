#include <stdio.h>
#include <assert.h>

void test_add()
{
    assert(add(1, 2) == 3);
    assert(add(1, -1) == 0);
    assert(add(0, 0) == 0);
    printf("All tests passed for addition.\n");
}

int add(int a, int b)
{

    return a + b;
}

int main()
{
    test_add();
    printf("Welcome to the simple calculator!\n");
    printf("Please enter two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, add(a, b));
    return 0;
}