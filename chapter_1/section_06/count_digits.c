/*
    This program counts digits, white spaces (blank, tab, newline), and all
    other characters.
*/

#include <stdio.h>

int main()
{
    int c, nwhite, nother;

    int digits[10];

    for (int i = 0; i < 10; ++i)
        digits[i] = 0;

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++digits[c - '0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits =");

    for (int i = 0; i < 10; ++i)
        printf(" %d", digits[i]);

    printf(", white space = %d, other = %d", nwhite, nother);

    return 0;
}
