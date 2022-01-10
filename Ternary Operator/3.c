#include <stdio.h>
int main()
{
    int a = 102,b=101, c=102;
    int x =a++;
    int z;

    z =(a==x?a++:++b);

    printf("%d",z);

    return 0;
}