#include <stdio.h>

int main(void)
{
    int a = 3, b = 9, c = 10;

    if (a > b)
    {
        if (a > c)
        {
            printf("a is max = %d\n", a);
        }
        else
        {
            printf("c is max = %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is max = %d\n", b);
        }
        else
        {
            printf("c is max = %d\n", c);
        }
    }
    return 0;
}
