#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 09 July, 2021
//Objective: Show the various ways to declare and initialise an array

void printarr(int []);

int main()
{
	int i; //Control Variable for Loop
	int list1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int list2[10], list3[10]; 
	
	printf("Hello! \n");
	printf("This program demonstrates the various ways of declaring and initialising arrays. \n\n");
	printf("The FIRST METHOD is to initialise the array while declaring. \n");
	printf("List 1 would hence be printed as: \n\n");
	
	printarr(list1);
	
	printf("\n\n");
	printf("The SECOND METHOD is to declare the array first and then ");
	printf("assign values to the elements using a loop. \n");
	
	for(i = 0; i < 10; i++) //Initialising LIST 2
	{
		list2[i] = (i+1);
	}
	
	printf("List 2 would hence be printed as: \n\n");
	
	printarr(list2);
	
	printf("\n\n");
	printf("The THIRD METHOD is to declare the array in the beginning and then ");
	printf("initialise at runtime (taking user input). \n");
	printf("List 3 first needs to be filled. \n");
	printf("Please enter the elements sequentially: \n");
	
	for(i = 0; i < 10; i++)
	{
		printf("\t");
		printf("Element %d: ", i+1);
		scanf("%d", &list3[i]);
	}
	
	printf("\n\n");
	printf("Now that the elemnts of List 3 have been assigned their values, it will be printed as: \n\n");
	
	printarr(list3);
	
	printf("\n\n\n Program End!"); //Dummy line to make sure the program executed successfully.
	return 0;
}

void printarr(int list[]) //printarr Function Definition
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf(" %d ", list[i]);
	}
	
	printf("\n");
}
