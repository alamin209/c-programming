#include<stdio.h>
#include<conio.h>
#include<Windows.h>

#define FALSE 0
#define TRUE 1

//scan codes for arrow keys.
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

void gotoxy(short, short);//for row an cloume
void box(short, short, short, short);//box ar jonno
void update(short, short, short, short, int *a);//box ar vidor number move and print korara jonno
int getkey();
int check(int *a);//it will ckeck the game is finish or not
void action(int key, int a[4][4]);//it  moves the number 
void swap(int*, int*);//it Change the palce and rplaceit 

int main()
{
	int a[4][4] = {
		1, 4, 15, 7,
		8, 10, 2, 11,
		14, 3, 6, 13,
		12, 9, 5, 32
	};
	int key, flag = FALSE;

	gotoxy(30, 20);//after getting the value of x co ordinate valu and y-co ordinate vaalue //and screen dive compiler 
	printf("\nArrange the numbes in ascending order.\nPress any key to start. . .");
	_getch();//for use get one byte caharater 
	system("cls");//clrscr(); in TurboC++
	box(0, 0, 24, 8);
	while (flag == FALSE)//Game ends when flag becomes TRUE
	{
		update(0, 0, 24, 8, (int*)a);
		key = getkey();
		action(key, a);// It moves the numbers
		flag = check((int*)a);/*It make flag TRUE on completion of game*/
	}
	system("cls");
	gotoxy(30, 20);
	printf("\nYou've done it dude.!!\nExiting. . . ");
	_getch();
	_getch();
	return 0;
}

//It prints the numbers in the boxes.
void update(short x1, short y1, short x2, short y2, int *a)
{
	int i, j, num, k = 0;
	for (j = y1; j < y2; j++)//row is calcul;atec 4place+2byte=8
	{
		for (i = x1; i < x2; i++)//col think it calculate 8place 
		{
			if (i > x1 && i < x2 && j > y1 && j < y2)
			{
				if ((i + 3) % 6 == 0 && j % 2 == 1)
				{
					gotoxy(i, j);
					num = a[k];
					if (num == 32)
						printf("  ");
					else
						printf("%d", num);
					k++;
				}
			}
		}
	}
}

//It draw box.
void box(short x1, short y1, short x2, short y2)// for that  box(0, 0, 24, 8); x1=0;y1=0;x2=24;y2=8 
{
	int i, j;
	for (i = x1; i <= x2; i++) // row is calcul;atec 4place+2byte=8
	{
		for (j = y1; j <= y2; j++) //row
		{
			/*====printing corners========*/
			if (i == x1 && j == y1)
			{
				gotoxy(i, j);
				printf("%c", 218);
			}
			if (i == x2 && j == y1)
			{
				gotoxy(i, j);
				printf("%c", 191);
			}
			if (i == x1 && j == y2)
			{
				gotoxy(i, j);
				printf("%c", 192);
			}
			if (i == x2 && j == y2)
			{
				gotoxy(i, j);
				printf("%c", 217);
			}
			/*================================*/


			if (i < x2 && i > x1)
			{
				if ((i) % 6 == 0)//Vertical division coerners
				{
					if (j == y1)
					{
						gotoxy(i, j);
						printf("%c", 194); //T
					}
					if (j == y2)
					{
						gotoxy(i, j);
						printf("%c", 193);//Reverse T
					}
					if (j == y1 + 2 || j == y1 + 4 || j == y1 + 6)
					{
						gotoxy(i, j);
						printf("%c", 197);//+
					}
				}
				else if (j % 2 == 0)// Horizontal line
				{
					gotoxy(i, j);
					printf("%c", 196);
				}
			}



			if (j > y1 && j < y2)
			{
				if ((j % 2 == 0))
				{
					if (i == x1)
					{
						gotoxy(i, j);
						printf("%c", 195);//Rotate left T
					}
					if (i == x2)
					{
						gotoxy(i, j);
						printf("%c", 180);//Rotate right T
					}
				}
				else if (i % 6 == 0)
				{
					gotoxy(i, j);
					printf("%c", 179);//Vertical lines
				}
			}
		}
	}
}

//gotoxy in compilers other than TurboC++
void gotoxy(short col, short row)
{
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position = { col, row };
	SetConsoleCursorPosition(h, position);
}

int getkey()
{
	int ch;
	ch = _getch();
	if (ch == 0)
		ch = _getch();
	return ch;
}

//It check if the puzzle is solved or not.
int check(int *a)
{
	int i;
	for (i = 0; i < 15; i++)
		if (a[i] > a[i + 1])
			return FALSE;
	return TRUE;
}

//It moves the number.
void action(int key, int a[4][4])
{
	int i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (a[i][j] == 32)
				goto BREAK;
BREAK:
	switch (key)
	{
	case RIGHT:
		if (j - 1 < 0)
			return;
		swap(&a[i][j], &a[i][j - 1]);/*Moves the botton to right*/
		return;
	case DOWN:
		if (i - 1 < 0)
			return;
		swap(&a[i][j], &a[i - 1][j]);/*Moves the botton down*/
		return;
	case LEFT:
		if (j + 1 > 3)
			return;
		swap(&a[i][j], &a[i][j + 1]);/*Moves the botton left*/
		return;
	case UP:
		if (i + 1 > 3)
			return;
		swap(&a[i][j], &a[i + 1][j]);/*Moves the botton up*/
		return;
	default:
		return;
	}
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}