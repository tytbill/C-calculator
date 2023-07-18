#include <stdio.h>
int main()
{
    int a = 10;
    int c = 20;
    int* pA = &a;
    int* pC = &c;
    printf("a的值是: %d, c的值是: %d\n", a, c);
    printf("a的地址是: %p, c的地址是: %p\n", &a, &c);
    printf("pC - x的值是: %p\n", pC - 1);
    // 新加了一个b = 15
    // 理论上应该没有改变a和c
    // 但为什么a和c的地址就变了？？？？
    char b = 'm';
    char* pB = &b;
    printf("b的值是: %c\n", b);
    printf("");
    printf("b的地址是: %p\n", &b);
    printf("pB - 1的值: %p\n", pB - 1);
    return 0;
}