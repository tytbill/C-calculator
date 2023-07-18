/**
 * create_string.c
 * Create a string.
 */
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * TODO: 创建一个长度为 length 的字符串(使用 malloc)
 * 返回字符串的指针
 * (提示：变量名就是指针/数组的名字 吼)
 * (提示：字符串的最后一个字符是 '\0'，所以字符串的实际长度为 length + 1，所以字符串的内存分配大小为 (length + 1) * sizeof(char))
 */
char* create_string(int length)
{
    char* str = (char*)malloc((length + 1) * sizeof(char));
    assert(str != NULL);
    return str;
}

void test_create_string()
{
    char* str = create_string(10);
    assert(str != NULL);
    free(str);
    printf("All tests for create_string passed!\n");
}

int main()
{
    test_create_string();
    return 0;
}