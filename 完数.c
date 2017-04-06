#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int sum;
    for(i = 1; i <= 1000; i++)
    {
        
     sum = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
          sum = sum + j;
            } 
    
        } 
            if(sum == i)
            {
          printf("sum = %d\n", sum);
            }
    }        
    return 0;
}
