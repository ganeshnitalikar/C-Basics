// 7 7 7 7 7 
// 6 6 6 6 6 
// 5 5 5 5 5 
// 4 4 4 4 4 
// 3 3 3 3 3

#include <stdio.h>
int main()
{
    int i,n;

    for(n=7; n>=3; n--)
    {
        for(i=1; i<=5; i++)
        {
            printf("%d ",n);
        }
        printf("\n");
    }
    return 0;
}