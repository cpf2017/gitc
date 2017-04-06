#include <stdio.h>

int add (int a, int b);
 int main(int argc, const char *argv[])
    {
       add (45 , 46);  
        return 0;
    }
int add (int a, int b)
{
    int sum = a + b;
    printf("sun = %d\n", sum);
    return sum;
}
