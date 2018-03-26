#include<stdio.h>
#include<conio.h>
#include<math.h>
//void main() 
//{
//	char ch[7] = "alamin";
//	int i=0;
//	char *ptr = ch;
//	printf("%s", ch);
//
//	char name[25];
//	printf("Take the name");
//	scanf_s("%s", name);
//	printf(" hello %s", name);
//	printf("no value........................");
//	while (*ptr!='\0')
//	{
//		printf("%c", *ptr);
//		*ptr++;
//	}
//	//must be comment out one if you want to see another
//	/*while (i<=6)
//	{
//		printf("%c", *(ptr+i));
//		i++;
//	}
//
//	printf("\n");*/
//
//	char name[25];
//	printf("Enter your full name ");
//	scanf_s("%[^\n]s", &name);
//	printf("balchal print hoy na %s", name);
//
//}

/// here is an example of gets and puts 

void main()
{
	char name[25];
	printf("Enter the name");
	gets_s(name);
	puts("Hello");
	puts(name);


}