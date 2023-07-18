#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /**
     * 复习 pointer
     * 1. pointer 是一个变量，存储的是一个地址
     * 2. pointer 有类型，比如 int*，char*，float*，代表这个 pointer 指向的地址里面存储的是什么类型的数据
     *
     * 复习 dereference
     * 1. dereference 是一个操作，用来获取/操作一个 pointer 指向的地址里面存储的数据(**通过地址找数据**)
     * 2. dereference 写法是 *pointer
     * ! dereference 之前，要确保 pointer 指向了一个有效的地址
     *
     * TODO: 理解下方的代码
     */
    {
        int a = 1;
        int* pA = &a;
        printf("pA 地址: %p, 值: %d\n", &pA, *pA);
        int** ppA = &pA;
        printf("ppA 地址: %p, *ppA 值(地址): %p\n", &ppA, *ppA); // *ppA == pA
        printf("ppA 地址: %p, **ppA 值: %d\n", &ppA, **ppA);     // **ppA == *pA == a
        int*** pppA = &ppA;
        printf("pppA 地址: %p, *pppA 值(地址): %p\n", &pppA, *pppA);   // *pppA == ppA
        printf("pppA 地址: %p, **pppA 值(地址): %p\n", &pppA, **pppA); // **pppA == *ppA == pA
        printf("pppA 地址: %p, ***pppA 值: %d\n", &pppA, ***pppA);     // ***pppA == **ppA == *pA == a
    }

    printf("--------------------------------------------------------------------------------------\n");

    /**
     * string
     * TODO: 理解下方的代码
     */
    {
        // char 数组，最后一个元素是 '\0'
        char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};
        printf("str len: %lu\n", strlen(str));     // 5
        printf("sizeof(str): %lu\n", sizeof(str)); // 6 (5 + 1) 1 是 '\0'
        printf("str 值(地址表示): %p, 值: %s 地址: %p\n", str, str, &str);

        str[0] = 'h';
        printf("修改 str[0] 之后的 str 值(地址表示): %p, 值: %s 地址: %p\n", str, str, &str);
        // str = "Hola"; // error: assignment to expression with array type
        strcpy(str, "Hola");
        printf("修改 str 之后的 str 值(地址表示): %p, 值: %s 地址: %p\n", str, str, &str);

        // 指针，指向一个 char 数组，最后一个元素是 '\0'
        char* str2 = "Hello"; // 更建议写成 const char* str2 = "Hello"; 提醒自己 不能 str2[0] = 'h';
        printf("str2 值(地址表示): %p, 值: %s 地址: %p\n", str2, str2, &str2);
        str2 = "Hola";
        printf("修改 str2 之后的 str2 值(地址表示): %p, 值: %s 地址: %p\n", str2, str2, &str2); // str2 指向了一个新的地址
        // str2[0] = 'h'; // error: assignment to const

        // strcat
        char str3[100] = "Hello";
        printf("str3: %s\n", str3);
        strcat(str3, " World");
        printf("str3: %s\n", str3);

        // strcmp
        char str4[] = "Hello";
        char str5[] = "Hello";
        char str6[] = "Hello World";
        printf("strcmp(str4, str5): %d\n", strcmp(str4, str5)); // 0
        printf("strcmp(str4, str6): %d\n", strcmp(str4, str6)); // -1
        printf("strcmp(str6, str4): %d\n", strcmp(str6, str4)); // 1

        // string array
        char str7[3][30] = {
            "Hello, world!",
            "Hello, C!",
            "Hello, C++!"};
        printf("str7[0] is %s\n", str7[0]); // Hello, world!
        printf("str7[1] is %s\n", str7[1]); // Hello, C!
        printf("str7[2] is %s\n", str7[2]); // Hello, C++!
    }

    printf("--------------------------------------------------------------------------------------\n");

    /**
     * Dynamic memory allocation
     * 1. malloc 申请内存
     * 2. free 释放内存
     * TODO: 理解下方的代码
     */

    {
        int* iptr;
        iptr = (int*)malloc(sizeof(int));
        // 检查 malloc 是否成功
        assert(iptr != NULL);
        *iptr = 10;
        printf("iptr 地址: %p, 值: %d\n", iptr, *iptr);
        free(iptr);
        printf("iptr 地址: %p, 值: %d\n", iptr, *iptr); // free 之后，iptr 指向的地址里面的数据已经被释放了，所以这里的值是不确定的

        // 申请一个数组
        int* iptr2;
        iptr2 = (int*)malloc(10 * sizeof(int));
        // 检查 malloc 是否成功
        assert(iptr2 != NULL);
        for (int i = 0; i < 10; i++)
        {
            iptr2[i] = i;
        }
        for (int i = 0; i < 10; i++)
        {
            printf("iptr2[%d] 地址: %p, 值: %d\n", i, &iptr2[i], iptr2[i]);
        }
        free(iptr2); // 释放数组
    }
}