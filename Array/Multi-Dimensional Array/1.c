//WAP TO READ 3*3 MATRIX AND PRINT ALL ELEMENT IN MATRIX FORM AND ALSO PRINT SUM OF THEM.

#include <stdio.h>
int main()
{
	int i,j,sum=0;
	int arr[3][3];
	
	printf("Enter 3*3 Matrix  Input\n");
	
	for(i=0; i<=2; i++)
	{
		for(j=0; j<=2; j++)
		{	
		scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nArray : \n");
	
	for(i=0;i<=2; i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d ",arr[i][j]);
			sum = sum + arr[i][j];
		}
		printf("\n");
	}
	printf("Sum Of Array Elements Is : %d",sum);
	return 0;
}
