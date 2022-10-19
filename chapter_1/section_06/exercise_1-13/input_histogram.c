/*
    Exercise 1-13

    Write a program to print a histogram of the lengths of words in its input.
    It is easy to draw the histogram with the bars horizontal; a vertical
    orientation is more challenging.
*/

#include <stdio.h>

#define maxLenToTrack 10

int main()
{
    int c, wordLength = 0;

    int words[maxLenToTrack];
    /*
        words[0] == number of 1-character words in text
        words[1] == number of 2-character words in text
        and so on...
    */

    // Initiate the array
    for (int i = 0; i < maxLenToTrack; ++i)
        words[i] = 0;

    // Record the lengths of words in the text
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t' || c == '\n' || c == '.' || c == ',' || c == '!' || c == '?')
        {
            // Protect the memory from overriding if words exceeding a certain
            // length are not to be tracked
            if (wordLength > maxLenToTrack)
                ;
            else
                ++words[wordLength - 1];

            wordLength = 0;
        }
        else
            ++wordLength;
    }

    // Print the histogram
    for (int i = 0; i < maxLenToTrack; ++i)
    {
        printf("%2d ", i + 1);

        for (int j = 0; j < words[i]; ++j)
            printf("-");

        printf("\n");
    }

    return 0;
}

/*
    Potential improvements for which I did not want to waste time:

    - Create two functions to print the histogram.

        Depending on the length of the text it could make sense to scale the
        histogram on a scale from 1 - 10. Crossing that threshold length value
        should trigger scaledPrint() function. For shorter texts, it does NOT
        make sense to use scaledPrint() because at low frequencies your
        function might not differentiate 10 occurrences from 7. For those cases
        use normalPrint().

    - Print a vertical histogram.

        Use a 10 x maxLenToTrack matrix where each column represents scale a
        frequency of a word appearing on a scale from 1 - 10.

    - Improve the mechanism that catches the transition from entering/exiting
      words.

        Example solution:

            if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z'))
                then it's not a word...

        Downsides are that it will break up composite words suck as 'like-minded'
        and it only works with English alphabet.
*/
