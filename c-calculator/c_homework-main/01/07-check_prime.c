/**
 * Write a function int is_prime(int n) that takes a non-negative integer n and returns 1 if it is prime, otherwise 0.
 * prime number: a number that is divisible only by itself and 1 (e.g. 2, 3, 5, 7, 11).
 */

#include <assert.h>

// TODO: write a is_prime function to do this.
// return 1 if n is prime, otherwise return 0
// hint: use for loop and % operator

void test_is_prime()
{
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(17) == 1);
    printf("All tests passed!\n");
}

int main()
{
    test_is_prime();
    return 0;
}
