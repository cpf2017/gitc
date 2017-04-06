#include <stdio.h>

int main(void)
{
    char i;
    int t = 0;
    i =getchar();
        while(i != EOF)
        {
            if(t == 0)
            {
                if(i =='%')
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
                if(i == '2')
                {
                    t++;
                }
                else
                {
                    printf("%%");
                    printf("%c", i);
                    t = 0;
                }
            }
            else if(t == 2)
            {
                if(i == '0')
                {
                    printf(" ");
                }
                else
                {
                    printf("%%");
                    printf("2");
                    printf("%c", i);
                }
                    t = 0 ;
            }
            i = getchar();
        }
        
    
    return 0;
}
