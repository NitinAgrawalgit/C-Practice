#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 12th May, 2021
int main()
{
	int x, y;
	
	printf("The arithmetic operators available in C are +, -, *, /, %. \n");
	printf("This program demonstrates their Use.\n\n");
	
	printf("Please Enter the Value of X: ");
	scanf("%d", &x);
	printf("Please Enter the Value of Y: ");
	scanf("%d", &y); //Input Block ends.
	
	printf("\n\n\t"); //Output Block starts.
	printf("X + Y = %d \t (Sum)\n\t", x+y);
	printf("X - Y = %d \t (Difference)\n\t", x-y);
	printf("X * Y = %d \t (Product)\n\t", x*y);
	printf("X / Y = %d \t (Quotient)\n\t", x/y);
	printf("X %% Y = %d \t (Remainder)\n\t", x%y);
	
	return 0;
}
