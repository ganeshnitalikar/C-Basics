//WAP TO PRINT GIVEN ARRAY LIST 10 20 30 40 50 60 70 AND SEARCH ELEMENT IN THAT ARRA
#include <stdio.h>
int main()
{
    int arr[7]= {10,20,30,40,50,60,70};
    int i,num,a;

    printf("Array Is : \n");
    for(i=0;    i<7 ;     i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nEnter The Number You Want To Search : ");
    scanf("%d",&num);

    for(i=0;   i<7;    i++)
    {
        if(num==arr[i])
        {
            a=1;
        }
    }
    if(a==1)
    {
        printf("Number Exist In Array");
    }
    else{
        printf("Number Does Not Exist");
    }

    return 0;
}