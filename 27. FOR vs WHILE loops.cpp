#include <stdio.h>
//This program was deveoped by Nitin Agrawal
//Date: 07 Jul, 2021
//Objective: Demonstrate the difference between for loop and while loop

int main()
{
	int sum, i, num;
	
	printf("Hello! \n");
	printf("Let's say we wish to add numbers input by user until the sum reaches 100. \n\n");
	printf("To perform this task using the WHILE loop: \n\n");
	
	sum = 0; i = 0;
	printf("Enter the numbers sequentially: \n");
	while(sum < 100)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("\n\n The sum is: %d", sum);
	
	printf("\n\nTo perform the same task using FOR loop: \n\n");
	
	sum = 0;
	printf("Enter the numbers sequentially: \n");
	for(i = 0; i < 100; i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &num);
		sum += num;
		if(sum >= 100)
			break;
	}
	printf("\n\n The sum is: %d", sum);
	
	printf("\n\n We can clearly see the differnces between the two loops.");
	
	return 0;
}
