#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 25th July, 2021
//Objective: Demonstrate call by value of a function

void triprint(int); //Function declaration

int main()
{
	int side;
	
	printf("Hello! \n");
	printf("This program prints a triangle using a function. \n\n");
	
	printf("Enter the no. of rows: ");
	scanf("%d", &side);
	
	triprint(side); /*Calling the function and passing the value 
						of a variable in argument.*/
	
	printf("\n\n\n A triangle of %d rows has been printed!", side);
	return 0;
}

void triprint(int a)
{
	int i, j;
	printf("\n");
	
	for(i = 0; i < a; i++)
	{
		printf("\n\t");
		
		for(j = 0; j < (a-i); j++)
		{
			printf(" ");
		}
		
		for(j = 0; j <= i; j++)
		{
			printf("* ");
		}
	}
}
