// 9 9 9 9 9 
// 8 8 8 8 8 
// 7 7 7 7 7 
// 6 6 6 6 6 
// 5 5 5 5 5

#include <stdio.h>
int main()
{
    int i,n;
    for(n=1; n<=5; n++)
    {
        for(i=9; i>=5; i--)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}