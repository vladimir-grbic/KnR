/*
    Exercise 1-19

    Write a function reverse(s) that reverses the character string s. Use it to
    write a program that reverses its input a line at a time.
*/

#include <stdio.h>

#define MAX_LINE_LEN 1000

// Declare functions
int getLine(char line[], int maxLineLen);
void reverse(char s[]);

int main()
{
    char currLine[MAX_LINE_LEN];
    int currLen;

    while ((currLen = getLine(currLine, MAX_LINE_LEN)) > 0)
    {

        // If there was a line reverse it and print it.
        if (currLine[0] != '\n')
        {
            reverse(currLine);
            printf("%s", currLine);
        }
    }

    return 0;
}

// Define functions
int getLine(char line[], int maxLineLen)
{
    // Reads a line into the character array, returns its length.

    int c, i;

    for (i = 0; i < maxLineLen - 1 && (c = getchar()) != '\n' && c != EOF; ++i)
        line[i] = c;

    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';

    // Return the length of the line.
    return i;
}

void reverse(char s[])
{
    // Reverses the character string s.

    int len, i;
    char c;

    // Count the length of the original string.
    for (len = 0; s[len] != '\n'; ++len)
        ;

    // Reverse the string.
    for (i = 0; i < (len / 2); ++i)
    {
        c = s[i];
        s[i] = s[len - i];
        s[len - i] = c;
    }

    s[len + 1] = '\0';
}
