#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date : 26th May, 2021
int main()
{
	int x, y;
	
	printf("Assignment operators are used to assign the result of an expression to a variable.\n");
	printf("In C, Assignment operators are available in shorthand form, which are as follows:- \n\n");
	printf("Please enter an integer number X: ");
	scanf("%d", &x);

	printf("\n\n\tAssignment operation \tValue of Y\n\n");
	printf("\t\tY  = X \t\t %d\n", y = x);
	printf("\t\tY += X \t\t %d\n", y += x);
	printf("\t\tY -= X \t\t %d\n", y -= x);
	printf("\t\tY *= X \t\t %d\n", y *= x);
	printf("\t\tY /= X \t\t %d\n", y /= x);
	printf("\t\tY %%= X \t\t %d\n", y %= x);
	
	return 0;
}
