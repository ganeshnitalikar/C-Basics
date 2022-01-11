//WAP TO TO READ 10 INTEGER VALUE AND PRINT ALL ELEMENT AND ALSO PRINT REVERSE ALTERNATE ELEMENT FROM ARRAY LIST.

#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Enter 10 Elements : ");
    for(i=0; i<=9; i++)
    {
        scanf(" %d ",&arr[i]);
    }
    for(i=9; i>=0; i = i -2)
    {
        printf(" %d ",arr[i]);
    }
    return 0;
}