#include <stdio.h>

int main(void)
{
    int a = 2 ;
    int b ;
    int flag = 0;
    while (a <= 100)
    {
        flag = 0;
        b = 2;
        while (b <= a - 1)
        {
            if (a % b == 0)
            {
                flag = 1;
                break; 
         }
            b++;
        }
    
        if (flag == 0)
        {
            printf("%d\n", a);
        }
            a++;
    }

    return 0;
}
