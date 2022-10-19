/*
    Exercise 1-14

    Write a program to print a histogram of the frequencies of different
    characters in its input.
*/

#include <stdio.h>

int main()
{
    int c;

    int charFrequencies[26];
    /*
        charFrequencies[0] == number of times letter 'a' appears
        charFrequencies[1] == number of times letter 'b' appears
        and so on...
    */

    // Initiate the array
    for (int i = 0; i < 26; ++i)
        charFrequencies[i] = 0;

    // Record the lengths of words in the text
    while ((c = getchar()) != EOF)
    {
        if (c >= 'a' && c <= 'z')
            ++charFrequencies[c - 'a'];
        if (c >= 'A' && c <= 'Z')
            ++charFrequencies[c - 'A'];
    }

    // Print the histogram
    for (int i = 0; i < 26; ++i)
    {
        printf("%2d ", i + 1);

        for (int j = 0; j < charFrequencies[i]; ++j)
            printf("-");

        printf("\n");
    }

    return 0;
}
