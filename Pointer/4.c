//DESIGN FUCTION SWAP() WHICH WILL EXCHANGE VALUE OF TWO VARIABLE BY USING POINTER.

#include <stdio.h>

int swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    return  *x, *y;

}


int main()
{
    int a=20,b=30;

    printf("\nValue Of A Is :%d",a);
    printf("\nValue Of B Is :%d",b);

    swap(&a,&b);

    printf("\nValue Of A Is :%d",a);
    printf("\nValue Of B Is :%d",b);

    return 0;
}