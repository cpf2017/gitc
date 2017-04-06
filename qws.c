#include <stdio.h>

int main(void)
{
    int x = 745;
    int sum = 1;
    int y, z;

    y = x / 10;
    printf("x = %d\n", x);
    if (y != 0)
    {
        sum = sum + 1;
    }

    z = y / 10;
    if (z != 0)
    {
        sum = sum + 1;
    }
    printf("sum = %d\n", sum);
    return 0;
}
