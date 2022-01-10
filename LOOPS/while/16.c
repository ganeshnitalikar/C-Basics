// WAP TO PRINT SUM OF ALL NUMBERS 1 TO 5
#include <stdio.h>
int main()
{
    int sum = 0;
    int i=1;
    while (i<=5)
    {
        sum = sum + i;
        i++;
    }
        printf("\nSum Is : %d",sum);
    return 0;
}