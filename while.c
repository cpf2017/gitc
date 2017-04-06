#include <stdio.h>

int main(void)
{
    int a = 10;
    while (a == 3)
    {
        printf("helloworld\n");
    }
    printf("after while ...\n");

    while (--a >= 0)
    {
         printf("a = %d\n", a);
    }
    return 0;
}
