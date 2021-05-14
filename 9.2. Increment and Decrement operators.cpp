#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 12th May, 2021
int main()
{
	int x, count;
	
	printf("This program demonstrates the use of the increment and decrement operators in C.\n");
	printf("These are unary operators denoted by ++ or -- and can be used as either prefix or postfix to the operand.\n\n");
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	count = 0;//Demonstrating use of increment operator.
	printf("\n\n\t X++ or ++X");
	printf("\n\t____________\n");
	while(count <= 5)
	{
		x++;
		count++;
		printf("\n\t    %d", x);
	}
	
	printf("\n------------------------------");
	
	count = 0;//Demonstrating use of decrement operator.
	printf("\n\n\t X-- or --X");
	printf("\n\t____________\n");
	while(count <= 5)
	{
		x--;
		count++;
		printf("\n\t    %d", x);
	}
	
	return 0;
}
