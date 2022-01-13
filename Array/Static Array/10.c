// WAP TO READ 5 AND FIND LARGEST NUMBER IN THAT ARRAY 

#include <stdio.h>
int main()
{
    int a[5];
    int i,lar;

    printf("Enter The 5 Integer Values : ");

    for(i=0;   i<=4;  i++)
    {
        scanf("%d",&a[i]);
    }
    lar = a[0];

    for(i=0;   i<=4;   i++)
    {
        if(lar<a[i])
        {
            lar = a[i];
        }
    }

    printf("\nThe Largest Number Is : %d",lar);
}