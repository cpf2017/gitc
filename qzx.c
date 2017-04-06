#include <stdio.h>

int main(void)
{
    int a = 6, b = 8, c = 5; 
    if (a < b)
    {
        if(a < c)
        {
            printf("a is min %d\n", a);
        }
        else
        {
            printf("c is min %d\n", c);
        }
    }
     else
        {
            if (b < c)
            { 
                printf("b is min %d\n", b);
            }
            else
            {
                printf("c is min %d\n", c);
            }
        }
    
    return 0;
}
