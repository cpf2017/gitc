#include <stdio.h>

int main(int argc, const char *argv[])
{
    int *p;
    int a = 10;
    p = &a;
    printf("%d\n", *p);

    return 0;
}
