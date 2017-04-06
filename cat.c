#include <stdio.h>

int main(void)
{
    char i;

        while((i = getchar()) != EOF)
        {
            if(i >= 'a' && i <= 'z')
            {
            printf("%c", i -= 32);
            }
            else
            {
                printf("%c", i);
            }
        }
    printf("\n");
    return 0;
}
