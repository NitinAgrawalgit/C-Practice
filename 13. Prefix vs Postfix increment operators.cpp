#include <stdio.h>
//This program was developed by Nitin Agrawal.
//Date: 14th May, 2021
int main()
{
	int m, y;
	
	printf("The increment operators ++ or -- work differently,\nwhen used as prefix and postfix to an operand in an assignment statement.\n\n");
	printf("When the operator is used as a prefix, \nit first increases the value of the variable and then used in the expression.");
	printf("\nFor Example:- \n\n");//Demonstrating ++m
	
	printf("\tEnter a number M:");
	scanf("%d", &m);
	
	y = ++m;
	printf("For M = %d \n", m);
	printf("After the statement 'Y = ++M' is executed, Values of Y and M are: \n");
	printf("\t Y = %d \t M = %d", y, m);
	
	printf("\n\n\n");
	printf("However, \nWhen it is used as a postfix, \nit first evaluates the expression and then increases the variable's value.");
	printf("\nFor Example:- \n\n");//Demonstrating m++
	
	y = m++;
	printf("For M = %d \n", m);
	printf("After the statement 'Y = M++' is executed, Values of Y and M are: \n");
	printf("\t Y = %d \t M = %d", y, m);
	
	return 0;
}
