// WAP TO PRINT THE TABLE OF 7 IN REVERSE ORDER

#include <stdio.h> 

int main()
{
    int i =10;
    int val;

    while(i>=1)
    {
        val = 7*i;
        printf("\n7*%d = %d",i,val);
        i--;
    }
    return 0;
}