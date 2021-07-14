#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 07 Jul, 2021
//Objective: Reading and printing an array using for loop

int main()
{
	int i, j, matrix[3][3]; //Taking a 2 dimensional array of 3 rows and 3 columns
	
	printf("Hello! \n");
	printf("Please enter the elements of the matrix sequentially: \n");
	
	for(i = 0; i < 3; i++) //Taking user input using for loop
	{
		printf("\n\n");
		for(j = 0; j < 3; j++)
		{
			printf("Element (%d,%d): ", i+1, j+1);
			scanf("%d", &matrix[i][j]);
		}
	}
	
	printf("\n\n");
	printf("The data stored in the matrix is as follows: \n");
	for(i = 0; i < 3; i++) // Printing the array using for loop
	{
		printf("\n\n\t");
		for(j = 0; j < 3; j++)
		{
			printf(" %d ", matrix[i][j]);
		}
	}
	
	printf("\n\n\n Program End! "); //Dummy line to indicate the program executed successfully
	return 0;
}
