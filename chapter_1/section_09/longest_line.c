#include <stdio.h>

#define MAX_LINE_LEN 1000

// Declare functions
int getLine(char line[], int maxLineLen);
void copy(char to[], char from[]);

int main()
{
    int currLen; // Length of the current line.
    int maxLen = 0; // Length of the longest line.
    char currLine[MAX_LINE_LEN];
    char longestLine[MAX_LINE_LEN];

    while ((currLen = getLine(currLine, MAX_LINE_LEN)) > 0)
    {
        if (currLen > maxLen)
        {
            maxLen = currLen;
            copy(longestLine, currLine);
        }
    }

    // If there was a line.
    if (maxLen > 0)
        printf("%s", longestLine);

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

void copy(char to[], char from[])
{
    // Copies 'from' into 't'; assumes 'to' is big enough.

    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}
