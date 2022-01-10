// 5 6 7 8 9 7 6 5 
// 5 6 7 8 9 7 6 5 
// 5 6 7 8 9 7 6 5 
#include <stdio.h>
int main()
{
    int i,n;
    for(n=1; n<=3; n++)
    {
        for(i=5; i<=9; i++)
        {
            printf("%d ",i);
        }
        for(i=7; i>=5; i--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}