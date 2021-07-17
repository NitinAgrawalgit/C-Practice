#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 14th July, 2021
//Objective: Demonstrate Function declaration, definition and calling

int rperimeter(int, int); //Function declaration
int rarea(int, int); //Function declaration

int main()
{
	int length, breadth, area, perimeter;
	
	printf("Hello! \n");
	printf("This program calculates the Perimeter and Area of a given Rectangle. \n");
	
	printf("\n\t");
	printf("LENGTH: ");
	scanf("%d", &length);
	printf("\tWIDTH: ");
	scanf("%d", &breadth);
	
	perimeter = rperimeter(length, breadth); //Function Calling
	area = rarea(length, breadth); //Function Calling
	
	printf("\n\n");
	printf("The Perimeter of the rectangle is: %d \n", perimeter);
	printf("The Area of the rectangle is: %d \n", area);
	
	return 0;
}

int rperimeter(int x, int y) //Function Definition
{
	int peri;
	
	peri = (2 * (x + y));
	
	return(peri);
}

int rarea(int x, int y) //Function Definition
{
	return(x*y);
}
