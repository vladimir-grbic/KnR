#include <stdio.h>

int main()
{

    int c, count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++count;
    }

    printf("%d\n", count);

    return 0;
}
