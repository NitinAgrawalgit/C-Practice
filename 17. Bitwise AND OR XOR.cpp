#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 27th May, 2021
int main()
{
	int x, y, result;
	
	printf("Hello! \n");
	printf("Bitwise operators act on bit level. \n");
	printf("Some of the bitwise operators in C are Bitwise AND, OR and XOR(Exclusive OR).");
	
	printf("\n\n\t");//BITWISE END STARTS
	printf("BITWISE AND: ");
	printf("\n\t-------------\n");
	printf("Enter an intger X: ");
	scanf("%d", &x);
	printf("Enter an intger Y: ");
	scanf("%d", &y);
	
	result = x&y;
	printf("\n\nThe Operation X & Y will output: %d", result);//BITWISE AND ENDS HERE.
	
	printf("\n\n\t");//BITWISE OR STARTS
	printf("BITWISE OR: ");
	printf("\n\t-------------\n");
	printf("Enter an intger X: ");
	scanf("%d", &x);
	printf("Enter an intger Y: ");
	scanf("%d", &y);
	
	result = x|y;
	printf("\n\nThe Operation X | Y will output: %d", result);//BITWISE OR ENDS HERE.

	printf("\n\n\t");//BITWISE XOR STARTS
	printf("BITWISE XOR: ");
	printf("\n\t-------------\n");
	printf("Enter an intger X: ");
	scanf("%d", &x);
	printf("Enter an intger Y: ");
	scanf("%d", &y);
	
	result = x^y;
	printf("\n\nThe Operation X ^ Y will output: %d", result);//BITWISE XOR ENDS HERE.
	
	printf("\n\n\n");//If this is printed to the console 
	printf("Thank You! ");//then the program has executed successfully.

	return 0;
}
