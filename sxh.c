#include <stdio.h>

int main(void)
{
    int i;
    int a, b, c;
    int h;
    for(i = 100; i <= 999; i++)
    {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        
        h = (a*a*a) + (b*b*b) + (c*c*c);
        if(h == i)
        {

            printf("h = %d\n", h);
        }

    }
    return 0;
}
