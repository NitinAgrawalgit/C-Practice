#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 27th May, 2021
int main()
{
	float x, y, z, largest;
	
	printf("Hello! \n");
	printf("Please enter three numbers X, Y, Z: ");
	printf("\n\t X: "); scanf("%f", &x);
	printf("\n\t Y: "); scanf("%f", &y);
	printf("\n\t Z: "); scanf("%f", &z);
	printf("\n\n\n\t");
	
	if(x > y)
	{
		if(x > z) //Nested IF ELSE Statement
		{
			largest = x;
		}
		else
		{
			largest = z;
		}
	}
	else
	{
		if(y > z)
		{
			largest = y;
		}
		else
		{
			largest = z;	
		}
	}
	
	printf("The largest of the three numbers is %.2f", largest);
	
	return 0;
}
