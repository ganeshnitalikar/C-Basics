//DESIGN FUNCTION SQUARE() AND CUBE() WHICH WILL RETURN SQUARE AND CUBE OF NUMBER BY PASSING NUMBER ADDRESS AS ARGUMENT TO FUNCTION FROM USERS.

#include <stdio.h>
int square(int *num)
{
    return *num**num;
}

int cube(int *num)
{
    return *num**num**num;
}

int main()
{
    int num,sq,cu;

    printf("\nEnter The Number: ");
    scanf("%d",&num);

    sq = square(&num);

    cu = cube(&num);

    printf("\nSquare  Of Entered Number Is : %d",sq);
    printf("\nCube Of Entered Number Is : %d ",cu);
    
    return 0;
}