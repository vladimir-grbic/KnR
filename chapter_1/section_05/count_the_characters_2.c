#include <stdio.h>

int main()
{
    double count;

    for (count = 0; getchar() != EOF; ++count)
        ; // 'for' statement must have a body.

    printf("%.0f\n", count);

    return 0;
}
