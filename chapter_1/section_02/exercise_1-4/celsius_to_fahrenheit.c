#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = 0;

    // Table header
    printf("+-------+\t+----------+\n");
    printf("|Celsius|\t|Fahrenheit|\n");
    printf("+-------+\t+----------+\n");

    while (celsius <= upper)
    {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("|%7.0f|\t|%10.1f|\n", celsius, fahr);
        celsius = celsius + step;
    }

    printf("+-------+\t+----------+\n");

    return 0;
}
