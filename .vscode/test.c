#include <stdio.h>
int main()
{
    char c = 'a';

    for (size_t i = 0; i < 26; i++)
    {
        printf("c: %c\n", c + i);
        // c += 1;
    }

    for (char c = 'a'; c < 'a' + 26; c++)
    {
        printf("c: %c\n", c);
    }
    return 0;
}