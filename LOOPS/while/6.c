// WAP TO PRINT EVEN NUMBERS BETWEEN 1 TO 100
#include <stdio.h>
int main()
{
    int i =1;
    while(i<=100)
    {
        if(i%2==0)
        {
            printf("\n%d",i);
        }
        i++;
    }
}