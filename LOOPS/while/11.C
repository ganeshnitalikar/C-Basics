// WAP  TO PRINT TABLE OF 4 AND OUTPUT LIKE 1*4=4
#include <stdio.h>
int main()
{
    int i=1;
    int val;

    while (i<=10)
    {
        val=4*i;
        printf("\n4*%d=%d",i,val);
        i++;
    }
    return 0;
}