// WAP TO PRINT SUM OF SQUARE OF ALL NUMBERS FROM 1 TO 50
#include <stdio.h>
int main()
{
    int i,sq,sum=0;
    for(i=1; i<=50; i++)
    {
        sq = i*i;
        sum = sum + sq;
    }
    printf("\nSum Of Square of Numbers : %d",sum);
    return 0;
}