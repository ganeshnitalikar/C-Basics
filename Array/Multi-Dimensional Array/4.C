//WAP TO READ MATRIX OF SIZE 3*3 AND PRINT THAT MARTRIX AND ALSO PRINT TRANSPOSE OF THAT MATRIX.

#include <stdio.h>

int main()
{
	int i,j,n;
	int arr[4][4];
	
	printf("Enter The Matrix Of Size 4*4 \n");

	for(i = 0;   i <=3;   i++)
	{
		for ( j = 0; j <=3; j++)
		{

			scanf("%d",&arr[i][j]);
			
		}
		
	}

	printf("\nEntered Array Is : \n");

	for(i = 0;      i <=3;       i++)
	{
		for ( j = 0;      j <=3;        j++)
		{

			printf(" %d ",arr[j][i]);

		}
		printf("\n");
	}

	printf("\nTraspose Of Entered Matrix Is : \n");

	for(i=0;    i<=3;   i++)
	{
		for(j=0 ;    j<=3;    j++)
		{

			printf(" %d ",arr[i][j]);

		}
		printf("\n");
		
	}
	return 0;
	
}
