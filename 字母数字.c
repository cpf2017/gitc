#include <stdio.h>

int main(void)
{
    char c;
    int i = 0; 
    int j = 0;

    while((c = getchar()) != EOF)
    {
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
            {
                  i++;
            }
        else if(c >= 48 && c<= 57)
        {
            j++;
        }

    }
            printf("i = %d, j = %d\n", i, j);
      return 0;
}
