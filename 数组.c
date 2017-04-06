#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,1,1};
    int i;
    int tmp = 1;
    for(i = 0; i < 5; i++)
    {
        if(a[i] == tmp)
        {
            
            printf("a[%d]\n", i);
        }
    }
    return 0;
}
