// WAP TO PRINT SUM OF ALL ALTERNATE NUMBERS FROM 1 TO 10
#include <stdio.h>
int main()
{
    int i,sum=0;
    for(i=1; i<=10; i=i+2)
    {
        sum = sum + i;
    }
    printf("\nSum Is: %d",sum);
    return 0;
}