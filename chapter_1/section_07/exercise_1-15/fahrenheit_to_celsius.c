/*
    Exercise 1-15

    Rewrite the temperature conversion program of Section 1.2 to use a function
    for conversion.
*/

#include <stdio.h>

#define UPPER 300
#define LOWER   0
#define STEP   20

// Function prototype
float fahrToCels(int fahr);

int main()
{
    int fahr = LOWER;

    while (fahr <= UPPER)
    {
        printf("%3d\t%5.1f\n", fahr, fahrToCels(fahr));
        fahr += STEP;
    }

    return 0;
}

// Function definition
float fahrToCels(int fahr)
{
    float celsius = 5.0 / 9 * (fahr - 32);

    return celsius;
}
