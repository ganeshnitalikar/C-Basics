//WAP TO READ AND ACCEPT N ELEMENTS THEN PRINT THOSE AND ELEMENTS AND ALSO TAKE INPUT NUMBER FROM USER AND SERACH THAT NUMBER IN ARRAY 

#include <stdio.h>
int main()
{
    int n,i,num,result;

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
        }
    }
    if(result==101)
    {
        printf("Yes,It Does Exist In Array");
    }
    else
    {
        printf("Oops,Does Not Exist In Array");
    }
    return 0;
}

