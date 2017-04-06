#include <stdio.h>

int main(void)
{
    char i;
        for (;(i = getchar()) != EOF;)
        {
            if(i ==' ' )
            {
                printf("%%20");
            }
            else
            {
                printf("%c", i);
            }

        }
    return 0;
}
