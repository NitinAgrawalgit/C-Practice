#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 10 July, 2021
//Objective: Demonstrate the difference between while and do while loop

int main()
{
	int sum = 100, count = 0, num;
	
	printf("Hello! \n");
	printf("This program demonstrates the difference between WHILE and DO WHILE loops. \n\n");
	
	printf("----------------------------- \n\n");
	printf("A simple While loop will not be executed even once \n");
	printf("if the loop condition is not satisfied.\n\n");
	printf("For example, since the value of sum is already 100, \n");
	printf("the program will not enter the loop even once. \n");
	
	while(sum < 100)
	{
		printf("Enter no. %d: ", (count+1));
		scanf("%d", &num);
		sum += num;
		++count;
	}
	printf("\n\n\t");
	printf("Sum = %d \n\t", sum);
	printf("No. of Iterations through the loop = %d", count);
	
	printf("\n\n");
	printf("----------------------------- \n\n");
	printf("However a Do while loop is executed atleast once \n");
	printf("regardless of the loop condition. \n\n");
	
	do
	{
		printf("Enter no. %d: ", (count+1));
		scanf("%d", &num);
		sum += num;
		++count;
	}
	while(sum < 100);
	printf("\n\n\t");
	printf("Sum = %d \n\t", sum);
	printf("No. of Iterations through the loop = %d", count);
	
	printf("\n\n");
	printf("Even though the loop condition was not satisfied, the above loop was executed once! \n");
	
	return 0;
}
