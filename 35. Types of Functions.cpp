#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 14th July, 2021
//Objective: Demonstrate different types of functions

void printshape(void); //without arguments, no return value
int asknumb(void); //without arguments, returns value
void linebr(int); //with arguments, no return value
int square(int); //with argument, returns value

int main()
{
	int num, result;
	
	printf("Hello!");
	linebr(2);
	
	printf("This is a square:- ");
	linebr(1);
	printshape();
	linebr(1);
	printf("To calculate its Area, we need the length of any one of its sides.");
	
	linebr(3);
	num = asknumb();
	
	result = square(num);
	
	linebr(1);
	printf("The Area of the Square is: %d", result);
	
	return 0;
}

void printshape(void)
{
	printf("\n");
	printf("\t  _______ \n");
	printf("\t |       | \n");
	printf("\t |       | \n");
	printf("\t |_______| \n");
}

int asknumb(void)
{
	int side;
	
	printf("Please enter the length of the square's side: ");
	scanf("%d", &side);
	return(side);
}

void linebr(int max)
{
	int i;
	
	for(i = 0; i < max; i++)
	{
		printf("\n");
	}
}

int square(int x)
{
	return(x*x);
}
