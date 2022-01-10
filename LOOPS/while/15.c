// WAP TO READ A NUMBER AND PRINTALL NUMBER BETWEEN 1 TO THAT NUMBER 

#include <stdio.h>
int main()
{
    int i= 1;
    int a;

    printf("Enter A Number :");
    scanf("%d",&a);

    while (i<=a)
    {
        printf("\n%d",i);
        i++;
    }
    return 0;
}