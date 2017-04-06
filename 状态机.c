#include <stdio.h>

int main(void)
{
    char i;
    int t = 0; 
    
        while(( i = getchar()) != EOF)
        {
            if(t == 0)
            {
                if(i == 'a')
                {
                    t++;
                }
                else
                {
                    printf("%c", i);
                    t = 0;
                }
            }
            else if(t == 1)
            {
                if(i == 'c')
                {
                    t++;
                }
                else 
                {
                    printf("a");
                    printf("%c", i);
                    t = 0;
                }
             }
            else if(t == 2)
            {
                if(i == 'a')
               {
                t++;
               }
            else
             {
                 
            printf("a");
             printf("c");
            printf("%c", i);
             t = 0;
             }
            }
            else if(t == 3)
            { 
                if(i == 'b')
               {
                  t++;
               }
            else if(i == 'c')
             {
                 printf("a");
                printf("c");
                t = 2;
             }
            else
            {
                printf("aca");
                printf("%c", i);
                t = 0;
            }
            }
            else if(t == 4)
            {
                if(i == 'a')
                {
                    printf(" ");
                }
                else
                {
                printf("a");
                printf("c");
                printf("a");
                printf("b");
                printf("%c", i);
              }
                 t = 0; 
            } 

        }
    return 0;
}
