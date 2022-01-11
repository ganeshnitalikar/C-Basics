//WAP TO READ 10 INTEGER VALUE AND PRINT SUM OF EVEN AND ODD NUMBER SEPARATELY. 

#include <stdio.h>

int main()
{
    int arr[10];
    int i,se=0,so=0;

    printf("Enter 10 Intergers : \n");
    for(i=0;i<=9; i++)
    {
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
        {
            se = se +arr[i];
        }
        else
        {
            so=so+arr[i];
        }    
    }
    printf("\nSum Of Even Numbers In Array Is : %d ",se);
    printf("\nSum Of Odd Numbers In Array Is : %d ",so);
    return 0;
}
