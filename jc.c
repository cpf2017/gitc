#include <stdio.h>

int main(void)
{
    int i = 1;
    int j = 1;
    int sum = 0;
    for (i = 1; i<=10; i++)
    {
        printf("i = %d\n", i);
        j =i*j;
        sum = sum + j;
    }
    printf("sum = %d\n", sum);
    return 0;
}
