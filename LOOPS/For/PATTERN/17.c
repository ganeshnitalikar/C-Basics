// 1 3 5 7 9
// 1 3 5 7 9
// 1 3 5 7 9
// 1 3 5 7 9

#include <stdio.h>
int main()
{
    int i,n;

    for(n=1; n<=4; n++)
    {
        for(i=1; i<=10; i = i+2)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
