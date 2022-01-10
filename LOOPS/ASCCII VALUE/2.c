// A B C D E 
// A B C D E 
// A B C D E 

#include <stdio.h> 
int main()
{
    int i,n;
    for(n=1; n<=3; n++)
    {
        for(i=65; i<=69; i++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}