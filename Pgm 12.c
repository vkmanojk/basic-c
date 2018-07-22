/***********************************************************************************************************
								PROGRAM TO 	MANIPULATE VECTORS
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Global variables
int n;

//Structure definition
struct array
{
	int k;
	int arr[100];
}a[100];

//Function to get input
void input()
{
	printf("\nEnter the total number of vectors: ");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;++i)
	{
		printf("\nEnter the size of vector %d: ",i+1);
		scanf("%d",&a[i].k);
		printf("\nEnter the vector elements:\n");
		for(j=0;j<a[i].k;++j)
		{
			scanf("%d",&a[i].arr[j]);
		}
	}
	printf("\nVector input successful !!!");
}

//Function to modify vector element
void modify()
{
	int i,j;
	printf("\nEnter the vector number whose element is to be modified: "); getchar();
	scanf("%d",&i);
	if(i>n)
	{
		printf("VECTOR DOES NOT EXIST !!! \nProgram terminating...");
		exit(1);
	}
	printf("\nEnter the number of the element whose value is to be modified: ");
	scanf("%d",&j);
	if(j>a[i-1].k)
	{
		printf("VECTOR ELEMENT DOES NOT EXIST !!! \nProgram terminating...");
		exit(1);
	}
	printf("\nEnter the modified value for element number %d of vector %d:  ",j,i);
	scanf("%d",&a[i-1].arr[j-1]);
	printf("\n\nValue modified successfully !!!");	
}

//Function to multiply vector element
void multiply()
{
	int i,j,x;
	printf("\nEnter the vector number whose elements are to be multiplied: ");
	scanf("%d",&i);
	if(i>n)
	{
		printf("VECTOR DOES NOT EXIST !!! \nProgram terminating...");
		exit(1);
	}
	printf("\nEnter a scalar value to be multiplied: ");
	scanf("%d",&x);
	for(j=0;j<a[i-1].k;j++)
	{
		a[i-1].arr[j]*=x;
	}
	printf("\n\nScalar multiplied with the specified vector successfully !!!");
}

//Function to display the vectors
void display()
{
	int i,j;
	for(i=0;i<n;++i)
	{
		printf("\nVector number: %d\n",i+1);
		for(j=0;j<a[i].k;++j)
		{
			printf("%d  ",a[i].arr[j]);
		}
	}
}

//Main function
int main()
{
	puts("\n********************************** PROGRAM TO MANIPULATE VECTORS *******************************************\n\n");
	printf("\nPress any key to input the vectors...");
	getch();
	input();
	printf("\nPress any key to modify the specified element in the specified vector...");
	getch();
	modify();
	printf("\nPress any key to multiply a vector by a scalar value...");
	getch();
	multiply();
	printf("\nPress any key to display all the vectors...");
	getch();
	display();	
	return 0;
}
