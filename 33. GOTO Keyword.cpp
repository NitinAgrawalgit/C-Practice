#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 13 July, 2021
//Objective: Demonstrate the use of goto keyword.

int main()
{
	char test;
	int bday, bmonth, byear, tday, tmonth, tyear, tr, br, rem;
	
	printf("Hello! \n");
	printf("Please enter Today's date: \n\n");
	printf("DAY: ");
	scanf("%d", &tday);
	printf("MONTH: ");
	scanf("%d", &tmonth);
	printf("YEAR: ");
	scanf("%d", &tyear);
	
	tr = ((tmonth - 1) * 12) + tday;
	
	repeat:
		
	printf("\n\n");
	printf("Please enter your date of birth: \n\n");
	printf("DAY: ");
	scanf("%d", &bday);
	printf("MONTH: ");
	scanf("%d", &bmonth);
	printf("YEAR: ");
	scanf("%d", &byear);
	
	br = ((bmonth - 1) * 12) + bday;
	
	rem = ((tyear - byear) * 365) + (tr -br);
	
	printf("\n\n\n");
	if(rem >= 6570)
		printf("Congratulations! You are eligible for a driver's Licence.");
	else
		printf("Sorry! You're not yet eligible to obtain a driver's licence.");
		
	printf("\n\nWould you like to use the program again? \n");
	printf("Enter Y for Yes and N for no: ");
	scanf(" %c", &test);
	
	if(test == 'y')
		goto repeat;
	
	printf("\n\n\n Program End! ");
	return 0;
}
