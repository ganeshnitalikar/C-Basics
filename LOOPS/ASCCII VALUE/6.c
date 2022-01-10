// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
// 5 4 3 2 1 2 3 4 5 
#include <stdio.h>
int main()
{
    int n,i;
    for(n=1; n<=3; n++)
    {
        for(i=5; i>=1; i--)
        {
            printf("%d ",i);
        }
        for(i=2; i<=5; i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}