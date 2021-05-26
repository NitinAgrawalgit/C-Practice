#include <stdio.h>
//This program was developed by Nitin Agrawal.
//Date : 26th May, 2021
int main()
{
	int a, b;

	printf("C provides three Logical Operators, \nLogical AND, Logical OR, Logical NOT\n\n");
	printf("Logical AND returns a 1 if and only if both operands are 1\n");
	printf("Logical OR  returns a 1 if any of the both operands is 1\n");
	printf("Logical NOT returns a 1 only if the operand is \n\n");
	printf("For Example:- \n\n");
	
	printf("Enter a number a: ");
	scanf("%d", &a);
	printf("Enter another number b: ");
	scanf("%d", &b);
	printf("\n\n");
	
	printf("Expression \t\tValue\n");
	printf("-------------------- \t-------\n");
	printf("(a == b) && (a < b)   \t %d \n\n", (a == b) && (a < b));
	printf("(a == b) && (a > b)   \t %d \n\n", (a == b) && (a > b));
	printf("!((a == b) && (a < b))\t %d \n\n", !((a == b) && (a < b)));
	printf("!((a == b) && (a > b))\t %d \n\n", !((a == b) && (a > b)));
	printf("(a == b) || (a < b)   \t %d \n\n", (a == b) || (a < b));
	printf("(a == b) || (a > b)   \t %d \n\n", (a == b) || (a > b));
	printf("!((a == b) || (a < b))\t %d \n\n", !((a == b) || (a < b)));
	printf("!((a == b) || (a > b))\t %d \n\n", !((a == b) || (a > b)));
	
	return 0;
}
