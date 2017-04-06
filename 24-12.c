#include <stdio.h>

int main(void)
{
    int a = 0, b = 30;
    int sum = 0;
    int y;
        y = a - 12;
        printf("a = %d, b = %d\n", a, b);

    if (y == 0)
    {
                sum = 12;
                printf("equivalent 12-hour:%d:%d PM\n", sum, b);
    }
    
    
        if (y > 0)
        {
            sum = a -12;
            printf("equivalent 12-hour:%d:%d PM\n", sum, b);

        }
            
     if (y < 0)
        {
            sum = a;
           
            printf("equivalent 12-hour:%d:%d AM\n", sum, b);
        }
    
        

    return 0;
}
