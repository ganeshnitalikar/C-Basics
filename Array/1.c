//WAP TO PRINT 5 INTEGER VALUE AND PRINT SUM OF THEM
//(100,200,300,400,500)
#include <stdio.h>
int main()
{
	int arr[5];
	int i ,sum=0;
	
	printf("Enter the 5 numbers\n");
	for(i=0; i<=4; i++)
		{
			scanf("%d",&arr[i]);
			sum = sum +arr[i];
		}

	printf("Sum of Elements Of Array Is %d ",sum);
	
	return 0;
}
