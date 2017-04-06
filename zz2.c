#include <stdio.h>

int main(void)
{
    int a = 10;
    a++;
    printf("a = %d\n", a);

    a++;
    printf("a = %d\n", a);

    int b = 10;

    printf("b++ = %d\n",b++);
    printf("++b = %d\n", ++b);


    return 0;
}
