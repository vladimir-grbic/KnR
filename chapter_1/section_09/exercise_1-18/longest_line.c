/*
    Exercise 1-18

    Write a program to remove trailing blanks and tabs from each line of input,
    and to delete entirely blank lines.
*/

#include <stdio.h>

#define MAX_LINE_LEN 1000

// Declare functions
int getLine(char line[], int maxLineLen);
int trim(char original[], int length);

int main()
{
    char currLine[MAX_LINE_LEN];
    int currLen;

    while ((currLen = getLine(currLine, MAX_LINE_LEN)) > 0)
    {
        trim(currLine, currLen);

        // If there was a line print it
        if (currLine[0] != '\n')
            printf("%s", currLine);
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

int trim(char line[], int length)
{
    // Trims the line and returns the new length of the line.

    int i;

    for (i = length - 1; line[i] == ' ' || line[i] == '\t'; --i)
        ;

    // Finish the line and the string.
    line[++i] = '\n';
    line[++i] = '\0';

    // Return the length of the string.
    return i;
}
