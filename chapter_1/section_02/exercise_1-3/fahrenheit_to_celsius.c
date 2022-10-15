#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    // Table header
    printf("+----------+\t+-------+\n");
    printf("|Fahrenheit|\t|Celsius|\n");
    printf("+----------+\t+-------+\n");

    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("|%10.0f|\t|%7.1f|\n", fahr, celsius);
        fahr = fahr + step;
    }

    printf("+----------+\t+-------+\n");

    return 0;
}
