#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 13 July, 2021
//Objective: Demonstrate use of Bitwise right shift operator using a while loop

int main()
{
	int i, num, result;
	
	printf("Hello! \n");
	printf("This program calculates the largest exponent of 2 which is smaller than a given no. \n\n");
	printf("Please enter an integer Number: ");
	scanf("%d", &num);
	
	result = num;
	i = 0;
	
	while(result > 1)
	{
		++i;
		result = num >> i;
	}
	
	printf("The largest exponent of two which is smaller than %d is: \n\t", num);
	printf("2 raised to the power %d", i);
	
	return 0;
}
