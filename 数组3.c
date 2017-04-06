#include <stdio.h>

int main(void)
{
    int a[6] = {45,34,25,87,43,67};
    int i;
    int sum;
    for(i = 0; i < 6; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
         
        sum = sum + a[i];
    }
        printf("sum = %d\n", sum);
    
    return 0;
}
