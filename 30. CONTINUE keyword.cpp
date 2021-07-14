#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 10 July, 2021
//Objective: Demonstrate the use of Continue Keyword.

int main()
{
	int i;
	char line[50];
	
	printf("Hello! \n");
	printf("This program takes in a string from the user and only displays the vowels.\n\n");
	printf("Please enter a line of text(Max. 50 characters): \n\t");
	scanf("%s", line);
	
	for(i = 0; i < 50; i++)
	{
		if(line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u')
			continue;
		else if(line[i] == '\0')
			break;
		else
			line[i] = ' ';
	}
	
	printf("\n\n");
	printf("The vowels in the input string are: \n\t");
	printf("%s", line);
	
	return 0;
}
