#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 18th July, 2021
//Objective: Demonstrate call by reference for a function

void discriminant(int *,int *,int *,int *);

int main()
{
	int a, b, c, result;
	
	printf("Hello! \n");
	printf("This program calculates the discriminant of a quadratic equation. \n\n");
	
	printf("Enter the coefficient of x sq.(a): ");
	scanf("%d", &a);
	printf("Enter the coefficient of x(b): ");
	scanf("%d", &b);
	printf("Enter the constant term(c): ");
	scanf("%d", &c);
	
	discriminant(&a, &b, &c, &result);
	
	printf("\n\n");
	printf("The discriminant of the quadratic equation is: %d \n\nHence, ", result);
	
	if(result > 0)
		printf("the roots are real and distinct.");
	else if(result == 0)
		printf("the roots are real and equal.");
	else
		printf("the roots are imaginary.");
		
	return 0;
}

void discriminant(int *p, int *q, int *r, int *dis)
{
	*dis = ((*q * *q) - (4 * *p * *r));
}
