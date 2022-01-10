// DESIGN A FUNCTION MAX() WHICH WILL PRINT LARGEST NUMBER BY PASSING TWO NUMBER AS A ARGUMENT TO FUNCTION FROM USER

#include <stdio.h>

void max(int a,int b)
{
    if(a>b)
    {
        printf("\n%d Is Greater Than %d",a,b);
    }
    else
    {
        printf("\n%d Is Greater Than %d",b,a);
    }
}

int main()
{
    int a,b;

    printf("\nEnter Two Numbers\n");
    scanf("%d\n%d",&a,&b);

    max(a,b);

    return 0;
}