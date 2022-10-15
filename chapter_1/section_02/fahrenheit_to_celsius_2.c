#include <stdio.h>

#define UPPER 300
#define LOWER   0
#define STEP   20

int main()
{
    int fahr = LOWER;

    while (fahr <= UPPER)
    {
        printf("%3d\t%5.1f\n", fahr, 5.0/9 * (fahr - 32));
        fahr += STEP;
    }

    return 0;
}
