// WAP TO PRINT SUM OF ALL NUMBERS FROM 10 TO 5 
#include <stdio.h>
int main()
{
    int i;
    int sum =0;

    for(i=10; i>=5; i--)
    {
        sum = sum + i;
    }
        printf("\nSum IS : %d ",sum);
        return 0;
}