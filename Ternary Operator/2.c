#include <stdio.h>
int main()
{
    int a = 11, b=10, c=12;
    int z; 
    a++;

    z = (a!=c?a:500);
    printf("%d",z);

    return 0;
}