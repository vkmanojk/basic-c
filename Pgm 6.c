/***********************************************************************************************************
								PROGRAM TO ADD TWO COMPLEX NUMBERS
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//structure definition
struct complex
{
	int real,imaginary;	
};

//function to add two complex numbers
struct complex sum(struct complex a, struct complex b)
{
	struct complex c;
	c.real=a.real+b.real;
	c.imaginary=a.imaginary+b.imaginary;	
	return c;
}

//Main function
int main()
{
	struct complex a,b,c;
	printf("\n*******************PROGRAM TO ADD 2 COMPLEX NUMBERS*********************\n");
	printf("\nEnter the first complex number (a+ib) : ");
	scanf("%d+i%d",&a.real,&a.imaginary);
	printf("\nEnter the second complex number (c+id): ");
	scanf("%d+i%d",&b.real,&b.imaginary);
	c=sum(a,b); 
	printf("\nThe sum of %d+i%d and %d+i%d = %d+i%d",a.real,a.imaginary,b.real,b.imaginary,c.real,c.imaginary);
	return 0;
}
