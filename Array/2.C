//WAP TO READ 10 INTEGER VALUES AND PRINT SUM AND MEAN OF THEM.

#include <stdio.h>
int main()
{
	int i,sum=0;
	int arr[10];
	float mean;
	
	printf("Enter The 10 Interger Values ");
	
	for(i=0; i<=9; i++)
	{
		scanf("%d",&arr[i]);
		sum =sum + arr[i];
	}
	mean = sum/10;
	
	printf("\nSum Of elements IS %d",sum);
	printf("\nMean Of Elements Is %f",mean);
	
	return 0;
	
}
