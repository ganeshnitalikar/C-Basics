//----------------------------------------------------------Dyanamic Arrays---------------------------------------------


//WAP TO READ N ELEMENTS AND STORE THOSE ELEMENTS IN ARRAY AND ALSO PRINT THOSE ELEMNTS AND SUM OF THEM.

#include <stdio.h>
int main()
{
	int n,i,sum = 0;
	
	printf("Enter Number Of Elemets To Store In Array :");
	scanf("%d",&n);
	int arr[n];
	
	printf("\nEnter The %d Elements :",n);
	for(i=0;i<n; i++)
	{
		scanf("%d",&arr[i]);
		sum = sum +arr[i];
	}
	printf("\nArray Elements Are : ");
	for(i=0; i<n; i++)
	{
		printf(" %d ",arr[i]);
	}
	printf("\nSum Of %d Array Element Is : %d",n,sum);
	return 0;
}

