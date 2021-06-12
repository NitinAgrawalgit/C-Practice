#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 02 June, 2021
//Objective: Take in two characters and compare their ASCII values
int main()
{
	char a, b;
	
	printf("Hello! \n");
	printf("Please enter character 1: ");
	scanf(" %c", &a);
	printf("Please enter character 2: ");
	scanf(" %c", &b);
	
	printf("\n\n\n\t");
	if(a == b)
	{
		printf("They are the same characters.!");
	}
	else if(a > b)
	{
		printf("According to their ASCII values, %c > %c", a, b);
	}
	else
	{
		printf("According to their ASCII values, %c > %c", b, a);
	}
	
	printf("\n\n Thank You!");
	
	return 0;
}
