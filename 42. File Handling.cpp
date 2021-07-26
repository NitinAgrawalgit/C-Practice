#include <stdio.h>
#include <stdlib.h>
//This program was developed by Nitin Agrawal
//Date: 24 July, 2021
//Objective: Write a number into a file and then read it using fprintf and fscanf

int main()
{
	char name[50];
	FILE *file1;
	
	file1 = fopen("nitin.txt", "w");//Since the file does not exist, the program will create one
	
	printf("Hello! \n");
	printf("Please enter Your name(without spaces): ");
	scanf("%s", &name);
	
	fprintf(file1, "%s", name); //Writing the data into the file using fprintf
	
	fclose(file1); //Closing the file
	
	file1 = fopen("nitin.txt", "r"); //Reopening file in read mode
	
	printf("\n\n");
	fscanf(file1, "%s", name); //Reading the data from the file using fscanf
	printf("The Name which was stored in the file is: %s", name);
	
	fclose(file1); //Closing the file
	
	printf("\n\n\nProgram End!");
	return 0;
}
