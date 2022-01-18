// WAP TO READ MATRIX OF 4*4 AND FIND TOTAL NUMBER OF EVEN AND ODD NUMBER IN THAT MATRIX
// 2 3 4 5
// 5 4 3 2
// 6 7 8 9
// 1 2 3 4

#include <stdio.h>
int main()
{
	int i, j, e = 0, o = 0;
	int arr[4][4];

	printf("Enter The 4*4 Matrix :\n");

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}

	printf("\nEntered Matrix Is : \n");

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf(" %d ", arr[i][j]);
			if (arr[i][j] % 2 == 0)
			{
				e++;
			}
			else
			{
				o++;
			}
		}
			printf("\n");
	}

	printf("\nTotal Number Of Even Numbers In Matrix Is : %d", e);
	printf("\nTotal Number Of Odd Numbers In Matrix Is : %d", o);

	return 0;
}
