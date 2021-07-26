#include <stdio.h>
//This program was developed by Nitin Agrawal
//Date: 23 July, 2021
//Objective: Read and print the info of 5 students using structure variables.

struct student //Structure Definition
{
	int rollno;
	int age;
	char section;
};

void readinfo(int *, int *, char *); //Function declaration to read structure values
void printinfo(int , int, char); //Function declaration to print structure values

int main()
{
	struct student stud1, stud2, stud3, stud4, stud5;
	
	printf("Hello!");
	//DATA INPUT STARTS FROM HERE
	printf("\n\n");
	printf("Enter the information of Student 1: ");
	readinfo(&stud1.rollno, &stud1.age, &stud1.section);
	
	printf("\n\n");
	printf("Enter the information of Student 2: ");
	readinfo(&stud2.rollno, &stud2.age, &stud2.section);
	
	printf("\n\n");
	printf("Enter the information of Student 3: ");
	readinfo(&stud3.rollno, &stud3.age, &stud3.section);
	
	printf("\n\n");
	printf("Enter the information of Student 1: ");
	readinfo(&stud4.rollno, &stud4.age, &stud4.section);
	
	printf("\n\n");
	printf("Enter the information of Student 5: ");
	readinfo(&stud5.rollno, &stud5.age, &stud5.section);
	
	printf("\n----------------------------------------\n");
	
	printf("\nThe data stored in the structure variables is as follows: ");
	//DATA PRINTING STARTS FROM HERE
	printf("\n\n");
	printf("Student 1: ");
	printinfo(stud1.rollno, stud1.age, stud1.section);
	
	printf("\n\n");
	printf("Student 2: ");
	printinfo(stud2.rollno, stud2.age, stud2.section);
	
	printf("\n\n");
	printf("Student 3: ");
	printinfo(stud3.rollno, stud3.age, stud3.section);
	
	printf("\n\n");
	printf("Student 4: ");
	printinfo(stud4.rollno, stud4.age, stud4.section);
	
	printf("\n\n");
	printf("Student 5: ");
	printinfo(stud5.rollno, stud5.age, stud5.section);
	
	printf("\n\n\n Program End!"); //Line to signify the end of the Program 
	return 0;
}

void readinfo(int *roll, int *ag, char *sect) //Function definition
{
	printf("\n\t ROLL NO.: ");
	scanf("%d", roll);
	printf("\t AGE: ");
	scanf("%d", ag);
	printf("\t SECTION: ");
	scanf(" %c", sect);
}

void printinfo(int roll, int ag, char sect) //Function definition
{
	printf("\n\t ROLL NO.: %d", roll);
	printf("\n\t AGE: %d", ag);
	printf("\n\t SECTION: %c", sect);
}
