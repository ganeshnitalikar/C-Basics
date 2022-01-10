// WAP TO PRINT ALL ODD NUMBERS FROM 2 TO 20;
#include <stdio.h>
int main()
{
    int i = 1;
    while(i<=20)
    {
        if(i%2!=0)
        {
            printf("\n%d",i);
        }
        i++;
    }
    return 0;
}