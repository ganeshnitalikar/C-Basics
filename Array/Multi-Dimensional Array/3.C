//WAPT TO READ MATRIX OF SIZE 3*3 AND FIND TOTAL NUMBER OF 3 AND 7 ELEMENT IN THAT MATRIX.
//1 3 2
//7 3 4 
//3 7 9

#include <stdio.h>
int main()
{
	int i,j,n=0;
	int arr[3][3];
	
	printf("Enter A Matrix Of Size 3*3\n");
	
	for(i=0;  i<=2;  i++)
	{
		for(j=0;  j<=2;  j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("\nEntered Array Is : \n");
	
	for(i=0;  i<=2;  i++)
	{
		for(j=0;   j<=2;  j++)
		{
			printf(" %d ",arr[i][j]);
			
			if(arr[i][j]==3 || arr[i][j]==7)
			{
				n++;
			}
		}
		printf("\n");
	}
	
	printf("\nTotal Number Of 3 and 7 In Matrix Is : %d",n);
	
	return 0;
}
