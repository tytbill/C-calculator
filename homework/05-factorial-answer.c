/**
 * Write a function int factorial(int n) that takes a non-negative integer n and returns its factorial.
 */
#include <assert.h>

// Use recursion to solve this problem.
// assert: unit test
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

void test_factorial()
{
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    assert(factorial(10) == 3628800);
}

int main()
{
    test_factorial();
    return 0;
}
