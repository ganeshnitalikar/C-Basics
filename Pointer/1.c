//

#include <stdio.h>

int main()
{
    int a=10, b=20;
    int *p,*q;

    p=&a;
    q=&b;

    printf("\nThe Result is %d",a);
    printf("\nThe Result is %d",*p);
    printf("\nThe Result is %d",*q);

    return 0;
}