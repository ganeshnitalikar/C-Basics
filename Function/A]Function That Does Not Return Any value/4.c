// DESIGN A FUNCTION TO CALCULATE AREA AND CIRCUMFERENCE OF CIRCLE

#include <stdio.h>

void area(int r)
{
    float a ;

    a = 3.14*r*r;

    printf("\nArea Of Circle Is : %f",a);
}

void circum(int r)
{
    float cir ;

    cir = 3.14*2*r;

    printf("\nCircumference Of Circle Is : %f",cir);
}

int main()
{
    int r;

    printf("\nEnter The Value Of Radius\n");
    scanf("%d", &r);

    area(r);
    circum(r);

    return 0;
}