#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 07 Jul, 2021
//Objective: Read a no. from the user and print its Multiplication Table up to 10

int main()
{
	int num, i; //num variable will store the user input no.
	
	printf("Hello! \n");
	printf("Please enter the number whose table you wish to see: ");
	scanf("%d", &num); //Taking the user Input
	
	printf("\n\n");
	for(i = 1; i <= 10; i++)
	{
		printf("\n\t");
		printf("%2d X %2d = %d", num, i, num*i);
	}
	
	printf("\n\n\n Program End! "); //Dummy Line to make sure the program executed correctly.
	return 0;
}
