/**
 * 4.30-6.30 pm Homework
 * 8.00-10.00 pm Already done
 * Print a-z characters
 */

#include <stdio.h>

int main()
{
    for (char ch = 'a'; ch < 'a' + 26; ch++)
    {
        printf("ch: %c\n", ch);
    }

    // 利用这一特性 写个循环 打印出 a-z
    return 0;
}
