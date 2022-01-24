//WAP TO PRINT SUM OF ALL ARRAY ELEMENT BY USING POINTER 
//int arr[]={10,20,30,40,50}

#include <stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i,*ptr,sum=0;

    ptr = arr;

    printf("\nGiven Array Is : \n");
    for(i=0;  i<5;  i++)
    {
        printf("%d ",*ptr);
        sum = sum + *ptr;
        *ptr++;
    }
    printf("\nSum Of Elements Of Array Is : %d",sum);
    return 0;
}