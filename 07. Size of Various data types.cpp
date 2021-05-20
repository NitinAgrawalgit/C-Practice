#include <stdio.h>
//This program was developed by Nitin Agrawal.
//Date: 12th May, 2021
int main()
{
	int a; //Declaring various variables of different data types.
	short int b;
	long int c;
	long long int d;
	float e;
	double f;
	long double g;
	char h;
	signed char i;
	unsigned char j;
	
	printf("DATA TYPE\t\tSIZE(in bytes)\n");
	printf("\nint\t\t\t%02d", sizeof(a));
	printf("\nshort int\t\t%02d", sizeof(b));
	printf("\nlong int\t\t%02d", sizeof(c));
	printf("\nlong long int\t\t%02d", sizeof(d));
	printf("\nfloat\t\t\t%02d", sizeof(e));
	printf("\ndouble\t\t\t%02d", sizeof(f));
	printf("\nlong double\t\t%02d", sizeof(g));
	printf("\nchar\t\t\t%02d", sizeof(h));
	printf("\nsigned char\t\t%02d", sizeof(i));
	printf("\nunsigned char\t\t%02d", sizeof(j));
	
	printf("\n\nThank You!");
	
	return 0;
}
