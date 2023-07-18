/**
 * my_strlen - returns the length of a string
 */
#include <assert.h>
#include <stdio.h>
#include <string.h>
/**
 * TODO: 自个儿实现 strlen 函数 (不要使用 strlen)
 * 返回字符串的长度
 * (提示：字符串的长度不包括 '\0')
 */

void test_my_strlen()
{
    assert(my_strlen("hello") == 5);
    assert(my_strlen("") == 0);
    printf("All tests for my_strlen passed!\n");
}

int main()
{
    test_my_strlen();
    return 0;
}