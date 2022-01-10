// a b c d e d c b a 
// a b c d e d c b a 
// a b c d e d c b a 

#include <stdio.h>
int main()
{
    int i,n;
    for(n=1; n<=3; n++)
    {
        for(i=97; i<=101; i++)
        {
            printf("%c ",i);
        }
        for(i=100; i>=97; i--)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}