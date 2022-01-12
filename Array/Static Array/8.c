//WAP TO READ 10 INTEGER VALUE AND PRINT THAT ARRAY ELEMENT AND COUNT TOTAL NUMBER OF 5 IN THAT ARRAY LIST.

#include <stdio.h>
int main()
{
	int count=0,i;
	int arr[10];
	
	printf("Enter 10 Integer : ");
	
	for(i=0; i<=9; i++)
	{
		scanf("\n%d",&arr[i]);
		if(arr[i]==5)
		{
			count++;
		}
	printf(" %d ",arr[i]);
	}
	
	printf("\nNumber Of 5 In Array Is : %d",count);
	return 0;
}
