#include <stdio.h>

int main()
{
    while ((int c = getchar()) != EOF)
        putchar(c);

    return 0;
}

/*
    Character c has to be integer to be big enough to store a value of EOF
    (which itself is an integer).

    An assignment can appear as a prat of a larger expression.

    The parentheses around the assignment are necessary because the
    precedence of != is higher than that of =.
*/
