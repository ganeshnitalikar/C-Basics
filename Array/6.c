//WAP TO READ 10 INTEGER VALUE AND PRINT ALL ELEMENT AND ALSO PRINT ALTERNATE ELEMENT FROM ARRAY LIST
// 1 2 3 
//o/p 1 3 50 7 60

#include <stdio.h>

int main()
{
    int arr[10];
    int i;

    printf("Enter The 10 Integer : ");
    for(i=0; i<=9; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<=9; i = i+2)
    {
        printf(" %d",arr[i]);
    }
    return 0;
}