// WAP TO READ A NUMBER AND PRINT ALL NUMBER FROM 1 TO THAT NUMBER 
#include <stdio.h>
int main()
{
    int n,i;

    printf("Enter A Number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("\n%d",i);
    }
    return 0;
}