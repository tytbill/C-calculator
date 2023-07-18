#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int* pA = &a;
    *pA = 123;
    int* iptr = (int*)malloc(sizeof(int));
    *iptr = 123;
    printf("%d", *iptr);
    return 0;
}
