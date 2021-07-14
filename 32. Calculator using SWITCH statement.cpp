#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 12 July, 2021
//Objective: Demonstrate use of All Arithmetic operations using Switch statement (CALCULATOR)

int main()
{
	int num1, num2, result;
	char oper;
	char name[30];
	
	printf("Please Enter Your Name: ");
	scanf("%s", name);
	
	printf("\n\nHello! %s, What operation would you like me to perform? \n\n\t");
	printf("ENTER OPERATOR CHOICE(+ - * / %%): ");
	scanf(" %c", &oper);
	printf("\n\tEnter number 1: ");
	scanf("%d", &num1);
	printf("\tEnter number 2: ");
	scanf("%d", &num2);
	
	switch(oper)
	{
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			result = num1 / num2;
			break;
		case '%':
			result = num1 % num2;
			break;
		default:
			printf("\nThe operator choice is invalid!");
			goto end;
	}
	
	printf("\n\n\n");
	printf("Okay %s, The result of the operation is: \n\n\t", name);
	printf("%d %c %d = %d", num1, oper, num2, result);
	
	end:
		
	printf("\n\n");
	printf("Thank You for using Calculator! ");
}
