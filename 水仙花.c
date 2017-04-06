#include <stdio.h>

int main(void)
{
    int i;
    int sum = 0;
    int a, b, c;
    
    
    for(i = 100; i <= 999; i++)
    {
    a = i / 100;
    b = i % 100 / 10;
    c = i % 100 % 10;
    

    sum = (a * a * a) + (b * b * b) + (c * c * c);

    if(sum == i)
    {
        printf("narcissus is:%d\n", sum);
    }
    
       }
    
    
    

    
        
    return 0;
}
