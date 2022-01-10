// WAP TO PRINT SUM AND MEAN OF 4 GIVEN NUMBER (A=10,B=20,C=30,D=40)

#include <stdio.h>

int main()
{
    int a =10 ,b=20 , c=30,d=40;
    int s;
    float m;

    s = a+b+c+d;
    m = s/4;
    
    printf("Sum Of 10,20,30,40 Is: %d,s");
    printf("\n Mean Of Above Number Is %f",m);
    
    return 0;
}