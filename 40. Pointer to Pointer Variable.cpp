#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 23 July, 2021
//Objective: Demonstrate a pointer to pointer operation

int main()
{
	int num, *ptr1, **ptr2;
	
	ptr1 = &num;
	ptr2 = &ptr1;
	
	printf("Hello! \n");
	printf("Please enter an integer no.: ");
	scanf("%d", &num);
	
	printf("\n");
	printf("The value in the variable num can be accessed in 3 ways: \n\t");
	printf("DIRECT: num = %d \n\t", num);
	printf("USING POINTER: num = %d \n\t", *ptr1);
	printf("USING POINTER TO POINTER: num = %d", **ptr2);
	
	printf("\n\n");
	printf("The value stored in variable ptr1 is: %d (memory address of num) \n", ptr1);
	printf("The value stored in variable ptr2 is: %d (memory address of ptr1) \n", ptr2);
	
	return 0;
}
