// DESIGN A FUNCTION AREA() WHICH WILL PRINT AREA OF RECTANGLE BY PASSING L,H AS ARGUMENT TO THE FUNCTION FROM THE USER

#include <stdio.h>

void Area(int l,int h)
{
    int a;

    a = l*h;

    printf("Area Of Triangle Is %d",a)
    ;

}

int main()
{
    int l,h;

    printf("Enter The Value Of L and H ");
    scanf("%d %d",&l,&h);

    area(l,h);

    return 0;
}