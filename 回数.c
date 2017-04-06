#include <stdio.h>
 
int main(void)
{
    int i;
    for (i = 10000; i <= 99999; i++)
    {
        if (i / 10000 == i % 10 && (i / 1000) % 10 == (i / 10) % 10)
            printf("%d\n", i);
    }
    return 0;
}
