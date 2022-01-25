//

#include <stdio.h>
int largestNumber(int *x,int *y)
{
    if(*x>*y)
    {
        return x;
    }
    else{
        return y;
    }
}
int main()
{
    int a=1000, b=400;
    int *p;

    p=largestNumber(&a,&b);

    printf("\nThe Largest Number Is : %d",*p);

    return 0;
}