#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 02 June, 2021
int main()
{
	int units;
	float amount;
	
	printf("Hello! \n");
	printf("This program proudces your electricity bill according to the following criteria:- \n");
	printf("\n\t UNITS \t\t RATE "); //Display chart of rates for units.
	printf("\n\t 0 - 200 \t Rs. 0.50 per unit");
	printf("\n\t 201 - 400 \t Rs. 100 + 0.65 per unit over 200");
	printf("\n\t 401 - 600 \t Rs. 230 + 0.80 per unit over 400");
	printf("\n\t 601 and above \t Rs. 390 + 1.00 per unit over 600");
	
	printf("\n\n"); // User Input
	printf("Please enter the units consumed this month: ");
	scanf("%d", &units);
	
	if(units <= 200)
		amount = units * 0.5;
	else if(units <= 400)
		amount = 100 + ((units-200) * 0.65);
	else if(units <= 600)
		amount = 230 + ((units-400) * 0.80);
	else
		amount = 390 + ((units-600) * 1.00);
	
	printf("\n\n\n"); //Output
	printf("The units used up in this month: %d \n", units);
	printf("The total amount to be paid: Rs. %.2f \n\n", amount);
	
	printf("Thank You!");
	
	return 0;
}
