/*
    Exercise 1-2

    Experiment to find out what happens when prints's argument string contains
    \c, where c is some character not listed above.
*/

#include <stdio.h>

int main()
{
    printf("Here are some of the escape sequences:\n");
    printf("\t\\n - new line character\n");
    printf("\t\\t - tab\n");
    printf("\t\\b - backspace\n");
    printf("\t\\\" - double quote\n");
    printf("\t\\\' - single quote\n");
    printf("\t\\\\ - backslash character\n");

    return 0;
}
