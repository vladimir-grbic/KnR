#include <stdio.h>

#define UPPER 300
#define LOWER   0
#define STEP   20

int main()
{
    int fahr = LOWER;

    while (fahr <= UPPER)
    {
        printf("%3d\t%3d\n", fahr, 5 * (fahr - 32) / 9);
        // Writing '5 / 9' first would've given us 0 (integer division).

        fahr += STEP;
    }

    return 0;
}
