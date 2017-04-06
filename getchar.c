#include <stdio.h>

int main(void)
{
    char c;
   while ((c = getchar()) != EOF) 
   {
       if('a' <= c && 'z' >= c)
       {
           printf("%c", c -= 32);
       }
       else if('A' <= c && 'Z' >= c)
       {
           printf("%c", c+= 32);
       }
   }
return 0;
}
