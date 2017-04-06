#include <stdio.h>

int main(void)
{
    int a[5] = {1,23,10,89,35};
    int i;
    int max = 0;
    for(i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }

    }
        printf("max = %d\n", max);
       return 0;     
    }

