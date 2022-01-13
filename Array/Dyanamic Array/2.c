//WAP TO TO ACCEPT TOTAL NUMBER ELEMENT STORE AND PRINT THAT ARRAY ELEMENTS AND ALSO PRINT THAT ALL ARRAY ELEMENT IN REVERSE ORDER.

#include <stdio.h>
int main()
{
	int i,n;

	printf("Enter The Number Of Elements Of Array : \n");
	scanf("%d",&n);

	int arr[n];

	printf("Enter Elements Of Array : \n");

	for(i=0;i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array Is : \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nArray In Reverse Order :");
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}
