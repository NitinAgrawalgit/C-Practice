#include <stdio.h>
//This program was developed by Nitin Agrawal.
//Date: 12th May, 2021
int main()
{
	int x, y;
	
	printf("Value of X: ");
	scanf("%d", &x);
	printf("Value of Y: ");
	scanf("%d", &y);
	
	x = x+y;
	y = x-y;
	x = x-y;
	
	printf("\n\nAFTER SWAPPING:\n\n");
	printf("X: %d \t Y: %d", x, y);
	
	return 0;
}
