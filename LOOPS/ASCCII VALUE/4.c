// a c e g i 
// a c e g i 
// a c e g i 
//97 98 100 102 104
#include <stdio.h>
int main()
{
    int i,n;
    for(n=1; n<=3; n++)
    {
        for(i=97; i<=106; i= i+2)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
    return 0;
}