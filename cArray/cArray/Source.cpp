#include<stdio.h>
void main()
{
	static int n[3][3] = {
			{ 2, 4, 3 },
			{ 6, 8, 5 },
			{ 3, 5, 1 }
	};
	int i, j,temp;

	//int change =n[0][0];


	for (i = 0; i <=1; i = i + 2)
	{

		for (j =i; j <= 2; j=j+2)//i=0 j=postion
		{
			
				temp = n[i][j];//i=0,j=0,n[i]={2,4,3},n[i][j]=2,temp=postion//first for loop
				n[i][j] = n[i][j+1];//j=0 ,n[i]=same n[i+j]=4
				n[i ][j+1] = temp;//n[i][j]=4
				//printf("%d\t", n[i][j]);


		}
		
	}


	for (i = 0; i <= 2; i++)
	{

		for (j = 0; j <= 2; j++)
		{
		
			printf("%d\t", n[i][j]);


		}
		printf("\n");
	}



}