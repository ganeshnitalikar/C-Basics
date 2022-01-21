#include <stdio.h>

int main()
{
    int a=10;
    int *p;
    int **q;
    int ***r;

    p=&a;
    q=&p;

    printf("\nThe Value Of a Is : %d",a);
    printf("\nThe Value Of *p Is : %d",*p);
    printf("\nThe Value Of **q Is : %d",**q);

    r=&q;

    printf("\nThe Value Of ***r Is : %d",***r);
    
    return 0;
}