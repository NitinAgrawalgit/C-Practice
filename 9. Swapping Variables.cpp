#include <stdio.h>
//This program was developed by Nitin Agrawal.
//Date: 12th May, 2021
int main()
{
	int num1, num2, temp;
	
	printf("This program takes in a fraction and produces its reciprocal as output.\n\n");
	printf("Enter the Numerator: ");
	scanf("%d", &num1);
	printf("Enter the Denominator: ");
	scanf("%d", &num2);
	printf("\n\nInitial Fraction: %d/%d", num1, num2);
	printf("\nNumerator: %d \t Denominator: %d", num1, num2);
	
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	printf("\n\nAFTER SWAPPING:\n\nNumerator: %d \t Denominator: %d", num1, num2);
	printf("\nReciprocal: %d/%d", num1, num2);
	
	return 0;
}
