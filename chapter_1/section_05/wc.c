#include <stdio.h>

#define IN  1
#define OUT 0

int main()
{
    // Get the file from the user
    char fileName[1024];
    printf("Enter the file name "
           "(include the path if in different directory).\n"
           "    - File name: ");
    scanf("%s", fileName);
    printf("\n");

    // Open the file
    FILE *file = fopen(fileName, "r");

    if (file == NULL)
    {
        printf("Error opening the file.\n");
        return 1;
    }

    // Count the lines, words, characters
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;

    while ((c = fgetc(file)) != EOF)
    {
        if (ferror(file))
        {
            printf("Error reading the file.");
            return 1;
        }

        ++nc;

        if (c == '\n')
            ++nl;

        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }

    fclose(file);

    printf("%d %d %d %s\n", nl, nw, nc, fileName);

    return 0;
}
