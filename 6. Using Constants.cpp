#include <stdio.h>//This program demonstrates the use of constants.
#define MAX 10 //Defining an integer constant using a preprocessor directive.

int main()
{
	int number;
	const int MIN = 5; //Declaring a variable as a constant.
	
	printf("Enter the number: ");
	scanf("%d", &number);
	
	if(number >= MIN)
	{
		if(number <= MAX)
			printf("\n\nThe number lies within the range.");
		else
			printf("\n\nThe number is greater than %d.", MAX);
	}
	else
		printf("\n\nThe number is smaller than %d.", MIN);

	return 0;
}
//This program was developed by Nitin Agrawal.
//Date: 12th May, 2021
