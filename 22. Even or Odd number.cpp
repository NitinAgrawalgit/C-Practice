#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 05 June, 2021
//Objective: Take in a number from the user and determine whether it's odd or even
int main()
{
	int num;
	
	printf("Hello! \n");
	printf("This program can determine whether a number is odd or even. \n\n");
	printf("PLEASE ENTER AN INTEGER NUMBER: ");
	scanf("%d", &num);  //User Input in num.
	
	printf("\n\n\t"); //For producing output in a more presentable manner.
	
	if(!(num % 2))
		printf("The number %d is EVEN", num);
	else
		printf("The number %d is ODD", num);
		
	return 0;
}
