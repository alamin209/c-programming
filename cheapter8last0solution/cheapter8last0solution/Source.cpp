//For the following set of sample data, compute the standard
//deviation and the mean.
//- 6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
//The formula for standard deviation is

#include<stdio.h>
#include <math.h>
void main()
{
	int n = 14;
	int a[15] = { -6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2 }, b;
	float total[15],mean=0;
	printf("Number of elelement:");
	scanf_s("%d", &b);
	int sum = 0;
	int i;
	for ( i = 0; i <=n; i++)
	{
		sum = sum + a[i];
	}

	mean = (sum / b);;
	printf("%d\n", mean);

	for ( i = 0; i <=n; i++)
	{
		
		total[i] = sqrt(pow((a[i] - mean), 2)) / b;


	}

	for (i = 0; i <= n; i++)
	{

		printf("here is data %d and here is devision=%f ", a[i], total[i]);


	}


}