//WAP TO READ 10 INTEGER VALUE AND COUNT TOTAL NUMBER OF OTHER ELEMENT EXCLUDING 3 AND 5 FROM ARRAY LIST

#include <stdio.h>
int main()
{
	int arr[10];
	int count=0,i;
	
	printf("Enter 10 Elements : ");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&arr[i]);
		
		if(arr[i]!=3 && arr[i]!=5)
		{
			count++;
			printf(" %d",arr[i]);
		}
		
	}
	printf("\nNumber Of Other Elemets : %d ",count);
	return 0;
}
