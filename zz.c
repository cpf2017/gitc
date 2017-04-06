#include <stdio.h>

int main(void)
{
    int a = 10, b = 10;
    int aa = 0, bb = 0;

    aa = a++;
    printf("aa = %d\n", aa);
    printf("a = %d\n", a);
    
    bb = ++b;
    printf("bb = %d\n", bb);
    printf("b = %d\n", b);
    return 0;
}
