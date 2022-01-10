// WAP TO PRINT A TABLE OF 8 IN REVERSE ORDER AND OUTPUT SHOULD BE 10*8=10
#include <stdio.h>
int main()
{
    int i =10;
    int val;
    while (i>=1)
    {
        val = 10*i;
        printf("\n10*%d=%d",i,val);
        i--;
    }
    return 0;
}