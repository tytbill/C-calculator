#include <stdio.h>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap_wrong(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    // print addresses and value of a, b
    printf("swap 内 a 地址: %p, 值: %d\n", &a, a);
    printf("swap 内 b 地址: %p, 值: %d\n", &b, b);
}

void increment(int* a)
{
    /**
     * TODO: 等效于 (*a)++ 还是 *a++ ?
     */
    *a = *a + 1;
}

int main()
{
    /**
     * TODO: 观察内存地址之间的关系 以及 int 的大小
     * 注意地址是 16 进制的
     */
    // print sizeof int
    printf("Size of int: %lu\n", sizeof(int));
    int a = 1;
    int b = 2;
    int c = 3;

    // print addresses and value of a, b, c
    printf("a 地址: %p, 值: %d\n", &a, a);
    printf("b 地址: %p, 值: %d\n", &b, b);
    printf("c 地址: %p, 值: %d\n", &c, c);

    printf("-------------------------------------------------------\n");

    /**
     * TODO: 观察内存地址之间的关系 以及 int*(地址) 的大小
     */
    // print sizeof an address
    printf("Size of address: %lu\n", sizeof(&a));

    int* pA = &a;
    int* pB = &b;
    int* pC = &c;

    // print addresses and value of pA, pB, pC
    printf("pA 地址: %p, 值: %p\n", &pA, pA);
    printf("pB 地址: %p, 值: %p\n", &pB, pB);
    printf("pC 地址: %p, 值: %p\n", &pC, pC);

    printf("-------------------------------------------------------\n");

    /**
     * TODO: * 这里作为 operator 到底干了啥事情
     */
    // print *pA, *pB, *pC
    printf("*pA: %d, *pB: %d, *pC: %d\n", *pA, *pB, *pC);

    *pA = 10;
    *pB = 20;
    *pC = 30;
    printf("操作完*pA *pB *pC后:\n");

    printf("a: %d, b: %d, c: %d\n", a, b, c);

    /**
     * TODO: 观察 pA - 1 的值
     */

    printf("-------------------------------------------------------\n");

    printf("Size of address: %lu\n", sizeof(&a));
    printf("a 地址: %p, a 值: %d\n", &a, a);
    printf("b 地址: %p, b 值: %d\n", &b, b);
    printf("pA - 1 值: %p\n", pA - 1);
    *(pA - 1) = 100;
    printf("*(pA - 1) = 100; 后 b 地址: %p, b 值: %d\n", &b, b);

    /**
     * TODO: 观察 arr 和 &arr 及 &arr[0] 的关系
     * 如何得出 arr 的长度
     */
    printf("-------------------------------------------------------\n");
    int arr[3] = {1, 2, 3};
    printf("arr 地址: %p, arr 值: %p\n", &arr, arr);
    printf("arr[0] 地址: %p, arr[0] 值: %d\n", &arr[0], arr[0]);
    // print sizeof an array
    printf("Size of array: %lu\n", sizeof(arr));
    // print sizeof an element in an array
    printf("Size of element in array: %lu\n", sizeof(arr[0]));
    // print length of an array
    printf("Length of array: %lu\n", sizeof(arr) / sizeof(arr[0]));

    /**
     * TODO: 观察 swap 和 swap_wrong 的区别
     */
    printf("-------------------------------------------------------\n");
    a = 1;
    b = 2;
    swap_wrong(a, b);
    printf("swap_wrong 后 a 地址: %p, 值: %d\n", &a, a);
    printf("swap_wrong 后 b 地址: %p, 值: %d\n", &b, b);

    swap(&a, &b);
    printf("swap 后 a 地址: %p, 值: %d\n", &a, a);
    printf("swap 后 b 地址: %p, 值: %d\n", &b, b);

    printf("-------------------------------------------------------\n");
    a = 1;
    increment(&a);
    printf("increment 后 a 地址: %p, 值: %d\n", &a, a);

    return 0;
}
