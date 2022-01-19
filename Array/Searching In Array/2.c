//WAP TO READ ACCEPT N ELEMENT FROM USER AND PRINT THAT ELEMENT AND FIND THAT SEARCH ELEMENT IN THAT ARRAY ELEMENT LIST.ALSO PRINT OCCURANCE OF THAT ELEMENT IN ARRAY   

#include <stdio.h>
int main()
{
    int n,i,num,result,count=0;

    printf("\nEnter Number Of Elements For Array :");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter the %d Integer Value:",n);
    for(i=0;  i<n;  i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Entered Array Is : \n");
    for(i=0;  i<n;   i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\nEnter Element Your Want To Search : ");
    scanf("%d",&num);

    for(i=0;   i<n;  i++)
    {
        if(num==arr[i])
        {
            result=101;
            count++;
        }
    }
    if(result==101)
    {
        printf("Yes,It Does Exist In Array");
        printf("\nNumber Of Times Element Found Is : %d",count);
    }
    else
    {
        printf("Oops,Does Not Exist In Array");
    }
    return 0;
}



