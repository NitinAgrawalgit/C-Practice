#include <stdio.h>
//This Program was developed by Nitin Agrawal
//Date: 12th May, 2021
int main()
{
	float numb;//Declaring variable
	
	printf("PLEASE ENTER A NUMBER\n(accurate to 2 decimal places): \n");
	scanf("%f", &numb); //Taking input from user
	
	printf("\n\nThe square of %.02f is %.04f", numb, numb*numb); //Printing output.
	
	return 0;
}
