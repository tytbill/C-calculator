/**
 * 4.30-6.30 pm Homework
 * Print a-z characters
 */

#include <stdio.h>

int main()
{
    char ch = 'a';

    // char is a number
    printf("ch: %c\n", ch + 1); // b
    printf("ch: %c\n", ch + 2); // c

    // 解法1
    // 利用这一特性 打印出 a-z
    printf("a-z: ");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", ch + i);
    }

    // 解法2
    ch = 'a';
    printf("\na-z: ");
    while (ch <= 'z')
    {
        printf("%c ", ch);
        ch++;
    }

    // 解法3
    printf("\na-z: ");
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c ", ch);
    }

    // 更多解法由你探索啦
    return 0;
}
