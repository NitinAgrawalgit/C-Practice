#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 15th July, 2021
//Objective: Use a pointer variable to store the address of another variable

int main()
{
	int x, *ptr, y;
	
	ptr = &x;
	
	printf("Hello! \n");
	printf("This program displays the use of Pointers. \n\n");
	printf("Please enter an integer No.: ");
	scanf("%d", &x);
	
	y = *ptr;
	
	printf("\n\n");
	printf("The value of x is: %d \n", *ptr);
	printf("The value of x is: %d \n", x);
	printf("The value of y is: %d \n", y);
	
	return 0;
}
