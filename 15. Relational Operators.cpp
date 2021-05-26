#include <stdio.h>
#include <conio.h>
//This program was developed by Nitin Agrawal
//Date : 26th May, 2021
int main()
{
	int x, y;
	
	printf("Relational operators perform comparisons. \n");
	printf("The value of a relational expression is either 0 or 1. \n");
	printf("For example:- \n\n"); //Beginning Block
	
	printf("Enter a number X: ");
	scanf("%d", &x);
	printf("Enter another number Y: ");
	scanf("%d", &y); //Input values from User
	
	printf("\n\n\tOperation \tResult\n");
	printf("\t--------- \t------ \n\n");
	printf("\t  X <  Y \t %d \n", x < y);
	printf("\t  X <= Y \t %d \n", x <= y);
	printf("\t  X >  Y \t %d \n", x > y);
	printf("\t  X >= Y \t %d \n", x >= y);
	printf("\t  X == Y \t %d \n", x == y);
	printf("\t  X != Y \t %d \n", x != y);
	
	printf("\n\nEnd of program");//Ending Statement
	
	return 0;
}
