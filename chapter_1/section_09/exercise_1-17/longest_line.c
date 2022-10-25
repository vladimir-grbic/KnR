#include <stdio.h>

#define MAX_LINE_LEN 1000
#define PRINT_REQUIREMENT 80

// Declare functions
int getLine(char line[], int maxLineLen);

int main()
{
    int currLen; // Length of the current line.
    char currLine[MAX_LINE_LEN];

    while ((currLen = getLine(currLine, MAX_LINE_LEN)) > 0)
    {
        if (currLen > PRINT_REQUIREMENT)
            printf("%s\n", currLine);
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
