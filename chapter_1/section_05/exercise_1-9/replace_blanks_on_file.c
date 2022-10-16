#include <stdio.h>
#include <stdlib.h>

#define FILE_SIZE 10000

int isSpecialChar(int c)
{
    char specialChars[] = {'.', ',', ';', '!', '?'};
    int numOfElements = sizeof(specialChars) / sizeof(specialChars[0]);

    for (int i = 0; i < numOfElements; ++i)
    {
        if (c == specialChars[i])
            return 1;
    }

    return 0;
}

int main()
{
    // Always keep track of the current and previous input characters
    int curr, prev = 0;

    FILE *file = fopen("text", "r");

    if (file == NULL)
    {
        printf("Could not open the file.\n");
        return 1;
    }

    // Create an array to store the characters from the file
    char *textArray = (char*) malloc(FILE_SIZE * sizeof(char));
    int arrayIndex = 0;

    // Until the end of the file is reached
    while ((curr = fgetc(file)) != EOF)
    {
        // If two blanks are read in a row ignore the latter blank
        if (curr == prev && prev == ' ')
            continue;
        // If . comes after a blank, erase the blank (previously read char)
        else if (isSpecialChar(curr) && (prev == ' '))
        {
            textArray[arrayIndex - 1] = curr;
            prev = curr;
            continue;
        }

        // Copy the character to the array (default)
        textArray[arrayIndex++] = curr;
        prev = curr;
    }

    // Print the array
    for (int i = 0; i < arrayIndex; ++i)
        printf("%c", textArray[i]);

    fclose(file);
    free(textArray);

    return 0;
}
