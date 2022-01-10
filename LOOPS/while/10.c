// WAP TO PRINT TABLE OF 10 IN REVERSE ORDER 
#include <stdio.h>
int main()
{
    int i=10;
    int val;
    while(i>=1)
    {
        val = i*10;
        printf("\n10*%d = %d",i,val);
        i--;
    }
    return 0;
}