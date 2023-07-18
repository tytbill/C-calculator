/**
 * Write a function int sum_of_digits(int n) that takes a non-negative integer n and returns the sum of its digits.
 */

#include <assert.h>

// TODO: Write the sum_of_digits function here
// hint: use while loop and % operator

void test_sum_of_digits()
{
    assert(sum_of_digits(123) == 6);
    assert(sum_of_digits(9876) == 30);
    assert(sum_of_digits(0) == 0);
    printf("All tests passed!\n");
}

int main()
{
    test_sum_of_digits();
    return 0;
}
