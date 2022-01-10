// WAP TO SUM OF ALL NUMBER FROM 1 TO 5

#include <stdio.h>
int main()
{
    int i;
    int sum=0;

    for(i=1; i<=5; i++)
    {
        sum = sum + i;
    }
    printf("\nSum IS :%d",sum);
    return 0;
}