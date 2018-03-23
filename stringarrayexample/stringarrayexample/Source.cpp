#include<stdio.h>
void main() 
{
	char ch[7] = "alamin";
	int i=0;
	char *ptr = ch;
	printf("%s", ch);

	char name[25];
	printf("Take the name");
	scanf_s("%s", name);
	printf(" hello %s", name);
	printf("no value........................");
	while (*ptr!='\0')
	{
		printf("%c", *ptr);
		*ptr++;
	}
	//must be comment out one if you want to see another
	/*while (i<=6)
	{
		printf("%c", *(ptr+i));
		i++;
	}

	printf("\n");*/


	//char array[100];

	//printf("Enter a string\n");
	//scanf_s("%s", array);

	//printf("Your entered string: %s\n", array);

}