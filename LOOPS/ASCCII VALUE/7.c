// e e e e 
// d d d d 
// c c c c
// b b b b
// a a a a 
#include <stdio.h>
int main()
{
    int i,n;
    for(n=101; n>=97; n--)
    {
        for(i=1; i<=5; i++)
        {
            printf("%c ",n);
        }
        printf("\n");
    }
    return 0;
}