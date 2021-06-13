#include <stdio.h>
//This program was developed by Nitin Agrawal.
//Date: 05 June, 2021
//Objective: Take a character input from user and determine if it's a vowel or a consonant.
int main()
{
	char alph; //For user Input Alphabet
	int low_char, upp_char;
	
	printf("Hello! \n");
	printf("This program can distinguish between a vowel and a consonant. \n\n");
	printf("PLEASE ENTER A SINGLE LETTER: ");
	scanf(" %c", &alph);
	
	low_char = (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u');
	upp_char = (alph == 'A' || alph == 'E' || alph == 'I' || alph == 'O' || alph == 'U');
	
	printf("\n\n\t");
	if(low_char || upp_char)
	{
		printf("The letter %c is a VOWEL!", alph);
	}
	else
	{
		printf("The letter %c is a CONSONANT!", alph);
	}
	
	return 0;
}
