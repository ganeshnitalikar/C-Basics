// WAP TO PRINT TABLE OF 7 IN  REVERSE ORDER

#include <stdio.h>
int main()
{
    int i,val;

    for(i=10; i>=1; i--)
    {
        val = 7*i;
        printf("\n7*%d = %d",i,val);
    }
    return 0;
}