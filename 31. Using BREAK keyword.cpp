#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 11 July, 2021
//Objective: Demonstrate the use of break keyword

int main()
{
	int i, flag = 0;
	char text[50], test;
	
	printf("Hello! \n");
	printf("This program takes in a string of text and determines whether a test letter is present in it or not. \n\n");
	
	printf("Please enter a string of text (Max. 50 Characters): \n\t");
	scanf("%s", text);
	printf("\n\n");
	printf("Please enter the test character: ");
	scanf(" %c", &test);
	
	for(i = 0; i < 50; i++)
	{
		if(text[i] == '\0')
			break;
		else if(text[i] == test)
		{
			flag = 1;
			break;
		}
	}
	
	printf("\n\n\n");
	if(flag == 1)
		printf("The character '%c' was found at place %d in the string.", test, (i+1));
	else
		printf("The character '%c' was not found in the string!", test);
		
	return 0; 
}
