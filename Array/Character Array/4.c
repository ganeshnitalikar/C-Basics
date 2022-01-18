//WAP TO FIND OUT TOTAL NUMBER OF 'A' IN GIVEN STRING 

#include <stdio.h>
int main()
{
	int i,count=0;
	char arr[10];
	
	printf("\nGiven String Is : %s \n",arr);
	gets(arr);

	i = 0;

	while(arr[i]!='\0')
	{
		if(arr[i]=='a' || arr[i] == 'A')
		{
			count ++;
		}
		i++;
	}
	printf("Total Number Of 'A' In Given String Is : %d",count);
	return 0;
}
