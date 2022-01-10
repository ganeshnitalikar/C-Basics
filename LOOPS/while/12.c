// WAP TO PRINT TABLE OF 7 AND OUTPUT SHOULD BE LIKE 7*1=7
#include <stdio.h>
int main()
{
    int i=1;
    int val;
    while (i<=10)
    {
        val = 7*i;
        printf("\n7*%d=%d",i,val);
        i++;
    }
    return 0;
}