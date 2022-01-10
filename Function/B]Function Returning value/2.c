// DESIGN A FUNCTION MEAN() WHICH WILL RETURN THE MEAN OF 4 NUMBER BY PASSING 4 NUMBERS TO THE FUNCTION AS ARGUMENT FROM USER 

#include <stdio.h>

float mean(int a, int b, int c, int d)
{
    float m;
    m = (a+b+c+d)/4;

    return m;
}

int main()
{
    int a,b,c,d;

    float mn;

    printf("\nEnter 4 Numbers ");
    scanf("%d %d %d %d ",&a,&b,&c,&d);

    mn = mean(a,b,c,d);

    printf("\nMean Of 4 Number Is %f",mn);

    return 0;
}