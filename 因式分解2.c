#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int n;
    for(i = 50; i <= 100; i++)
    {
        n = i;
        printf("%d =", n);
        for(j = 2; j < n;)
        {
            if (n % j == 0)
            {
                
                printf("%d *", j);        
                n /= j;
            }
            else 
            {
                j++;
            }
        }
    
        printf("%d\n", j);
        
        for(j = 2; j< i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
            if(j == i)
            {
                printf("%d = 1 * %d", i, i);
            }
    
           printf("\n");
}
    return 0;
}
