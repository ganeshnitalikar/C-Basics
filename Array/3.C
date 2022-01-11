//WAP TO READ TEMPERATURE OF SEVEN DAYS AND CALCULATE AVERAGE TEMP OF WEEK

#include <stdio.h>

int main()
{
	float temp[7];
	float avg;
	int i,sum = 0;

	printf("Enter The Temperature Of Seven Day :");

	for(i=0; i<=6; i++)
	{
		scanf("%f",&temp[i]);
		sum = sum + temp[i];
	}
	avg = sum/7;

	printf("Average Of All Temperature : %f",avg);
	return 0;
}
