//DESIGN A FUNCTION AREA(),PERIMETER() WHICH WILL PRINT AREA OF RECTANGLE AND PERIMETER OF RECTANGLE BY PASSING ADDRESS OF L,B, AS ARGUMENT TO FUNCTION.
#include <stdio.h>

void area(int *l, int *b)
{
    int temp1,temp2,area;
    temp1=*l;
    temp2=*b;

    area = temp1*temp2;

    printf("\nArea Of Rectangle Is : %d",area);
}

void perimeter(int *l, int *b)
{
    int temp1, temp2, perimeter;
    temp1 =*l;
    temp2 =*b;

    perimeter= 2*(temp1+temp2);

    printf("\nPerimeter Of Rectangle Is : %d",perimeter);

}

int main()
{
    int a,b;

    printf("\nEnter The Value Of Lenght : ");
    scanf("%d",&a);

    printf("\nEnter The Value Of Length : ");
    scanf("%d",&b);

    area(&a,&b);
    perimeter(&a,&b);

    return 0;

}