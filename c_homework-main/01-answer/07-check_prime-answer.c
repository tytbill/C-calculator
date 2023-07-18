#include <assert.h>

int is_prime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

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
