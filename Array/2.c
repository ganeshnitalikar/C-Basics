//WAP TO PRINT ALL ARRAY ELEMENT AND ALSO PRINT SUM OF ALL ELEMENTS FROM GIVEN ARRAY LIST 10,20,30,40,50,60,70,80,90,100. AND PRINT ALTERNATE ELEMENT.

#include <stdio.h>
int main()
{
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int i,sum=0,count=0;

    printf("\nArray Elements are :\n");

    for(i=0;     i<10;     i++)
    {
        printf("%d ",arr[i]);
        sum = sum +arr[i];
    }
    printf("\nSum Of All Numbers In Array Is : %d",sum);
    
    printf("\nAlternate Elements Are : \n");

    for(i=0;    i<10;    i= i+2)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}