/**
 * my_strcat - Concatenate two strings
 */
#include <assert.h>
#include <stdio.h>
#include <string.h>

/**
 * TODO: 自个儿实现 strcat 函数 (不要使用 strcat)
 * 将 src 拼接到 dest 的后面
 * 返回 dest
 * (提示：字符串的最后一个字符是 '\0')
 * (提示：遍历字符串的时候，可以使用 while 循环)
 * (提示：可以使用 src[i++] = dest[j++]，这样就可以同时遍历 src 和 dest 同时赋值)
 */

void test_my_strcat()
{
    char dest[100] = "hello";
    assert(strcmp(my_strcat(dest, " world"), "hello world") == 0);
    printf("All tests for my_strcat passed!\n");
}

int main()
{
    test_my_strcat();
    return 0;
}