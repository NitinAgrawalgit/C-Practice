#include <stdio.h>
//This program was deviloped by Nitin Agrawal
//Date: 14th July, 2021
//Objective: Use a Recursive Function

int factorial(int);

int main()
{
	int num, result;
	
	printf("Hello! \n\n");
	printf("Please enter an integer no.: ");
	scanf("%d", &num);
	
	result = factorial(num);
	
	printf("\n\n");
	printf("The value of %d! is: %d", num, result);
	
	return 0;
}

int factorial(int x) //Function definition
{
	int fact;
	
	if(x == 1) //Base case
		fact = x;
	else
		fact = x * factorial(x-1); //Function calls itself
		
	return(fact);
}
