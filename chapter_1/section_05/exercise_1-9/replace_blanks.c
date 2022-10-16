/*
    Exercise 1.9

    Write a program to copy its input to its output, replacing each string of
    one or more blanks by a single blank.
*/

#include <stdio.h>
#include <stdlib.h>

#define FILE_SIZE 1000

int main()
{
    int curr, prev = 0;

    while ((curr = getchar()) != EOF)
    {
        if (curr == prev && prev == ' ')
            continue;

        putchar(curr);
        prev = curr;
    }

    return 0;
}
