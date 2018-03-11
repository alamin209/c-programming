//Given an array p[5], write a function to shift it circularly left
//by two positions.Thus, if p[0] = 15, p[1] = 30, p[2] = 28,
//p[3] = 19 and p[4] = 61 then after the shift p[0] = 28, p[1] =
//19, p[2] = 61, p[3] = 15 and p[4] = 30. Call this function for a
//(4 x 5) matrix and get its rows left shifted.


#include<stdio.h>
void main()
{
	int i,*b;
	int p[5] = { 15, 30, 28, 19, 61 };
	 //a = p;
	 b = p;
	 int first = *b;
	 int seecndnd = *(b + 1); //it is vry important beacus of array previousvalue counting 

	 //printf("%d", seecndnd);
 //aftar siftingit will  28,19,61,15,30 
	for ( i = 0; i <3; i++)
	{
		*(b+i)=*((p + 2) + i);
		/* printf("%d\t",*(b+i) );*/
	}
	*(b + 3) = first;
	*(b + 4) = seecndnd;

	for(i = 0; i < 5; i++)
	{
		printf("%d\t", *(b + i));
	}

	  
	printf("Enter for 2nd step of the question");

	int j,a[4][5],c;

	for (c = 0; c <4; c++)
	{

		for (j = 0; j <=5; j++)
		{
			scanf_s("%d", &a[c][j]);



		}
	}


	int *m;
	m = &a[0][0];
	int first1 = *(m);
	printf("first one  %d", first1);
	int secdn = *(m + 1);
	printf(" here is 2ns value %d", secdn);
	printf("herer is going to next array..................\n");

	for (c = 1; c <4; c++)
	{
		for (j = 2; j <5; j++)
		{
			//printf("%d\t", a[c][j]);
			printf("%d\t", *(m+c*4+ j));
		}
		printf("\n");
	}

	printf("Here is left shirted part");

	*(m) = first1;
	*(m + 1) = secdn;

	for (c = 0; c <4; c++)
	{
		for (j = 0; j <5; j++)
		{
			//printf("%d\t", a[c][j]);
			printf("%d\t", *(m + c * 4 + j));
		}
		printf("\n");
	}











	




}
/////////////////////////////////////////////////////////////////////////////////////////
//I learn how to add previuos afert shifting  in array in c


//////////////////////////////////////////////////////////////////////////////////////////