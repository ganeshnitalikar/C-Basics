// WAP TO PRINT SUM OF SQUARE OF ALL NUMBERS FROM 5 TO 1 
#include <stdio.h>
int main ()
{
    int i = 5;
    int sq,sum=0;

    while (i>=1)
    {
        sq = i*i;
        sum = sum + sq;
        i--;
    }
    printf("Sum Of Square of 1 to 5 Is :%d",sum);

    return 0;
}