// DESIGN A FUNCTION SUM WHICH WILL RETURN THE SUM OF TWO NUMBERS BY PASSING TWO NUMBERS AS A ARGUMENT TO FUNCTION FROM USER

#include <stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int x,y,z;

    printf("Enter Two Numbers : ");
    scanf("%d %d",&x,&y);

    z = sum(x,y);

    printf("\nSum Of Two Numbers Is : %d",z);
}