#include <stdio.h>

int main(void)
{
    int x = 25, sum = 0;
    if (x/10 ==0)
    {
        sum = 1;
        printf("x = %d\n, sum = %d\n",x, sum);
    }
    else
    {
        sum = 2;
        printf("x = %d\n, sum = %d\n",x, sum);
    }
    return 0;
}
