// DESIGN A FUNCTION SQUARE() AND CUBE() WHICH WILL PRINT SQUARE AND CUBE OF NUMBER BY PASSING NUMBER AS ARGUMENT TO FUNCTION

#include <stdio.h>

void square(int num)
{
    int sq;
    sq=num*num;
    printf("\nSquare Of Number Is : %d",sq);

}

void Cube(int num)
{
    int cu;
    cu = num*num*num;
    printf("\nCube Of Number Is : %d",cu);
}

int main()
{
    int num;

    printf("\nEnter Number");
    scanf("%d",&num);

    square(num);
    Cube(num);

    return 0;

}