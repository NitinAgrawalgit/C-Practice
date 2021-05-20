#include <stdio.h>
/*This program was devloped by Nitin Agrawal
	Date: 5th May, 2021 */
	
int main()
{
	int x, y, sum;

	printf("Please enter the value of x: ");
	scanf("%d", &x);
	printf("\nPlease enter the value of y: ");
	scanf("%d", &y);
	
	sum = x + y;
	
	printf("\n\nThe sum of x and y is: %05d", sum);
	//%05d specifies the field width as atleast 5 digits, with 0 padding the leading blank spaces
	
	return 0;
}
