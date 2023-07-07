/**
 * Write a function int factorial(int n) that takes a non-negative integer n and returns its factorial.
 */
#include <assert.h>

// TODO: Write the factorial function here
// Use recursion to solve this problem.

// assert: unit test
void test_factorial()
{
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
    printf("All tests passed!\n");
}

int main()
{
    test_factorial();
    return 0;
}
