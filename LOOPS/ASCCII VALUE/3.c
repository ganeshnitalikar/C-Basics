// E D C B A
// E D C B A
// E D C B A

#include <stdio.h>
int main()
{
    int i,n;

    for(n=1; n<=3; n++)
    {
        for(i=69; i>=65; i--)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}
