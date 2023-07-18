/**
 * Write a function int fibonacci(int n) that takes a non-negative integer n and returns the nth Fibonacci number.
 * The Fibonacci sequence is defined as follows:
 * F(0) = 0
 * F(1) = 1
 * F(n) = F(n - 1) + F(n - 2) for n >= 2
 */
#include <assert.h>

// TODO: Write the fibonacci function here
// Use recursion to solve this problem.
void test_fibonacci()
{
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(10) == 55);
    printf("All tests passed!\n");
}

int main()
{
    test_fibonacci();
    return 0;
}
