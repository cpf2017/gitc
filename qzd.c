#include <stdio.h>

int main(void)
{
    int a = 4, b = 6, c = 5;
        if (a > b)
        {
            if (a > c)
            {
                printf("a is maxii = %d\n", a);
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
