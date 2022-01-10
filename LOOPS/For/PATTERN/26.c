// 6 6 6 6 9 9 9 9 
// 6 6 6 6 9 9 9 9
// 6 6 6 6 9 9 9 9

#include <stdio.h>
int main()
{
    int i,n;

    for(n=1; n<=3; n++)
    {
        for(i=1; i<=4; i++)
        {
            printf("6 ");
        }
        for(i=1; i<=4; i++)
        {
            printf("9 ");
        }
        printf("\n");
    }
    return 0;
}