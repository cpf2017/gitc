#include <stdio.h>

int main(void)
{
    char i ;
    int j = 0;
    while ((i = getchar()) != EOF)
    {
        if(i == '\n')
            j++;

    }

            printf("%d\n", j);
    return 0;
}
