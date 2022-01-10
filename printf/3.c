// WAP TO PRINT AREA OF CIRCLE AND CIRCUMFERENCE FROM GIVEN RADIUS R=4
#include <stdio.h>
int main()
{
    int r=4;
    float a,c;

    a = 3.14*r*r;
    c = 2*3.14*r;

    printf("Area Of Circle Is : %f",a);
    printf("\n Circumference Of Circle Is %f",c);

    return 0;
}