//WAP TO READ 5 INTEGER VALUE AND PRINT THAT ARRAY ELEMENT AND PRINT THAT NUMBER IN REVERSE ORDER.

#include <stdio.h>

int main()
{
	int i,count=0;
	int arr[5];   //100 200 300 400 500
				  //0    1   2   3   4
	
	printf("Enter The 5 Integer Value :");

	for(i=0; i<=4 ; i++)
	{
		scanf("%d",&arr[i]);
		count++;
	}
	count--;  //count =4
	
	for(i=count;i>=0;i--)
	{
		printf(" %d ",arr[i]);  //500 400 300 200 100
	}
	return 0;
}
