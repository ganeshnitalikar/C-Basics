//CALL BY VALUE 
//If any function , called by passing value or variable.

#include <stdio.h>

void sum(int a, int b, int c)
{
    int s=a+b+c;
    printf("\nSum Is : %d",s);
}
int main()
{
    int a=3,b=4,c=5;

    sum(a,b,c);

    sum(3,4,5);

    return 0;
}
