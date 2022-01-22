// DESIGN FUNCTION AREA() AND CIRCUM() WHICH WILL PRINT AREA OF CIRCLE AND CIRCUMFERENCE OF CIRCLE OF CIRCLE BY PASSING BY ADDRESS OF RADIUS AS ARGUMENT TO FUNCTION.

#include <stdio.h>
void area(int *r)
{
    float area;
    int temp;
    temp=*r;
    area = 3.14*temp*temp;
    printf("\nArea Of Circle Is :%.2f",area);
}
void circum(int *r)
{
    float circum;
    int temp;
    temp = *r;
    circum = 3.14*2*temp;
    printf("\nCicumference Of Circle Is %.2f",circum);
}

int main()
{
    int a;
    printf("\nEnter The Value Of Radius: ");
    scanf("%d",&a);
    area(&a);
    circum(&a);

    return 0;
}
