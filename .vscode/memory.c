#include <stdio.h>

void swap(int* pA, int* pB)
{
    int temp = *pA;
    *pB = *pA;
    *pA = *pB;
}

void swap2(int* pC, int* pD)
{
}

// pass by value
void increment2(int a)
{
    a++;
}

void increment(int* pA)
{
    (*pA)++;
}

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    char e = 'e';

    char* pE = &e;

    int* pA = &a;
    *(pA - 2) = 20;

    int arr[3] = {1, 2, 3};

    printf("&a: %p\n", &a);
    printf("&a - 1: %p\n", &a - 1);
    printf("&b: %p\n", &b);
    printf("&c: %p\n", &c);

    return 0;
}
