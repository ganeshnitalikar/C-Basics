// WAP TO READ MATRIX OF SIZE 4*4 AND FIND LARGEST NUMBER AND THE SMALLEST NUMBER IN THAT MATRIX.

#include <stdio.h>
int main()
{
    int i,j;
    int small,lar;
    int arr[4][4];

    printf("Enter The Matrix Of Size 4*4 : \n");

    for(i=0;    i<=3;  i++)
    {
        for(j=0;   j<=3;   j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    lar = arr[0][0];
    small = arr[0][0];

    printf("\nEntered Matrix Is : \n");

    for(i=0;  i<=3;  i++)
    {
        for(j=0;  j<=3;  j++)
        {
            printf(" %d",arr[i][j]);

            if(small>arr[i][j])
            {
                small = arr[i][j];
            }
            if(lar<arr[i][j])
            {
                lar = arr[i][j];
            }
        }
        printf("\n");
    }
    printf("\nLargest Number :%d ",lar);
    printf("\nSmallest Number :%d ",small);

    return 0;
}