#include <stdio.h>

void jc (int n);
int main(int argc, const char *argv[])
{
       jc (10);
    return 0;
}
  
void jc (int n)
{
    int sum;
    int i, j = 1;
    for(i = 1 ; i <=n; i++)
    {
        j = i*j;
        sum = sum + j;

    }
    printf("sum = %d\n", sum);

}
