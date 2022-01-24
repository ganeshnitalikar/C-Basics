//DESIGN A FUNCTION AREA(),PERIMETER() WHICH WILL PRINT AREA OF RECTANGLE AND PERIMETER OF RECTANGLE BY PASSING ADDRESS OF L,B, AS ARGUMENT TO FUNCTION.
#include <stdio.h>

void area(int *l, int *b)
{
    int area;

    area = *l**b;

    printf("\nArea Of Rectangle Is : %d",area);
}

void perimeter(int *l, int *b)
{
    int  perimeter;

    perimeter= 2*(*l+*b);

    printf("\nPerimeter Of Rectangle Is : %d",perimeter);

}

int main()
{
    int a,b;

    printf("\nEnter The Value Of Length : ");
    scanf("%d",&a);

    printf("\nEnter The Value Of Breadth : ");
    scanf("%d",&b);

    area(&a,&b);
    perimeter(&a,&b);

    return 0;

}