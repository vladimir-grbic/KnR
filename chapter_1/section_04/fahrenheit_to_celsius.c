#include <stdio.h>

#define LOWER   0
#define UPPER 300
#define STEP   20

int main()
{
    for (int fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%3d\t%6.1f\n", fahr, 5.0 / 9 * (fahr - 32));

    return 0;
}
