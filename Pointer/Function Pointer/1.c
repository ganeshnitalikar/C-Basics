//SWAP FUNCTION
#include <stdio.h>

void swap(int *p1,int *p2)
{

    int temp;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

}

int main()
{
    int a=100, b=200;

    printf("\nThe Value Of A is : %d",a);
    printf("\nThe Value Of B is : %d",b);

    swap(&a,&b);

    printf("\nThe Value Of A is : %d",a);
    printf("\nThe Value Of B is : %d",b);
}