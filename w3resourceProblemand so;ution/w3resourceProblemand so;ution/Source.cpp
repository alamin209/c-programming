//Write a C program to find and print the square of each one of the even values from 1 to a specified value
#include<stdio.h>
void main()
{
	int a,i,count=0;
	printf("Enter the range between the valu given: ");
	scanf_s("%d", &a);

	for ( i = 2; i <= a; i++)
	{
		
		if (i%2==0)
		{
			count =  i*i;
			printf("%d = %d^2\n", count,i);
		}
		//printf("%d\n", count);
	}



}