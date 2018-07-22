/***********************************************************************************************************
								PROGRAM TO COMPUTE THE TRANSPOSE & TO MULTIPLY 2 MATRICES 	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Global variables
int a[10][10],b[10][10],c[10][10];

//Function to display a matrix
void display(int a[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

//Function to input elements of the matrix
int *input(int a[][10],int m, int n)
{
	int i,j;
	int *p=&a[0][0];
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			scanf("%d",&a[i][j]);
		}
	}
	return p;
}

//Function to multiply two matrices
int *multiply(int a[][10],int m,int n, int b[][10],int p, int q,int c[][10])
{
	int *ptr=&c[0][0];
	int i,j,k,sum=0;
	for(i=0;i<m;++i)
	{
		for(j=0;j<q;++j)
		{
			for(k=0;k<p;++k)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			c[i][j]=sum;
			sum=0;
		}
	}
	return ptr;
}

//Function to find the transpose of a matrix
int *transpose(int matrix[][10],int a[][10],int m,int n)
{
	int *ptr1=&a[n][m];
	int i,j;
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			a[j][i]=matrix[i][j];
		}
	}
	return ptr1;
}

//Main function
int main()
{
	puts("\n************ PROGRAM TO COMPUTE THE TRANSPOSE OF A MATRIX AND MULTIPLY IT WITH THE MATRIX ************\n");
	int m,n,*p,*q,*r;
	printf("\nEnter the order of the matrix:");
	scanf("%d %d",&m,&n);
	p=&a[0][0];
	q=&b[0][0];
	r=&c[0][0];
	printf("\nEnter array elements:\n");
	p=input(a,m,n);
	printf("\nThe entered matrix is: \n");
	display(a,m,n);
	printf("\nPress any key to find the transpose of the matrix...");
	getch();
	q=transpose(a,b,m,n);
	printf("\nThe transpose of the matrix is:\n");
	display(b,n,m);
	printf("\nPress any key to multiply the entered matrix with its transpose...");
	getch();
	r=multiply(a,m,n,b,n,m,c);
	printf("\nThe required output is: \n");
	display(c,m,m);
	return 0;				
}
