#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 27th May, 2021
int main()
{
	int x;
	
	printf("Hello! \n");
	printf("This program demonstrates the use of an IF statement. \n");
	
	printf("Enter an integer no. X: ");
	scanf("%d", &x);
	
	printf("\n\n");
	if(x > 9 || x < -9)
	{
		printf("\t _     _ \n");
		printf("\t 0     0 \n");
		printf("\t    |    \n");
		printf("\t   ---   \n");
		printf("\t 0 0 0 0 \n");
		printf("\t ------- \n");
	}
	printf("\n\n");
	printf("If you are seeing a shape on the Screen, X is atleast a two digit no. \n");
	printf("Otherwise try again. (:-)");
	
	return 0;
}
