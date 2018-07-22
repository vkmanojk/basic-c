/*************************************************************************************
					Program to manipulate employee records
					By,
					VK. Manoj Kumar
					CB.EN.U4CSE17040
**************************************************************************************/

//Header files included
#include<stdio.h>
#include<stdlib.h>

//Structure definition
struct emp
{
	int id;				//To store employee id
	char name[30];		//To store employee name
	float salary;		//To store employee salary
	char dept[20];		//To store the name of the department in which the employee  works
}a;


//Function to increase the salary of the employee by 10%
void increase()
{
	float temp;
	temp=a.salary*0.1;
	a.salary=a.salary+temp;
	printf("\n%s's salary successfully increased by 10 percent \n",a.name);
}

//Function to display the details of the employee
void disp()
{
	puts("*************EMPLOYEE DETAILS**************");
	printf("\nID					: %d",a.id);
	printf("\nName					: %s",a.name);
	printf("\nSalary				: %.2f",a.salary);
	printf("\nDepartment			: %s",a.dept);
}

//Main function
int main()
{
	
	puts("\n*****************Program to manipulate employee records*****************\n\n");
	printf("\nEnter employee id                  : ");
	scanf("%d",&a.id);
	printf("\nEnter employee name  		         : ");
	getchar();
	scanf("%[^\n\t]s",&a.name);
	printf("\nEnter employee's salary   		 : ");
	scanf("%f",&a.salary);
	printf("\nEnter employee's department name   : ");
	scanf("%s",a.dept);
	printf("\nPress any key to increase %s's salary !",a.name);
	getch();
	increase();
	disp();
	return 0;	
}
