/*
    Exercise 1-8

    Write a program to count blanks, tabs, and newlines.
*/

#include <stdio.h>

int main()
{
    int c, blanks, tabs, newlines;

    blanks = tabs = newlines = 0;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
            case ' ':
                ++blanks;
                break;
            case '\t':
                ++tabs;
                break;
            case '\n':
                ++newlines;
                break;
        }
    }

    printf("\nNumber of blanks:   %d\n"
             "Number of tabs:     %d\n"
             "Number of newlines: %d\n",
           blanks, tabs, newlines);

    return 0;
}
