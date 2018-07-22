/*************************************************************************************
					Program to manipulate employee records
					By,
					VK. Manoj Kumar
					CB.EN.U4CSE17040
**************************************************************************************/

//Header files included
#include<stdio.h>
#include<stdlib.h>

//Function to check if the matrix is upper triangular matrix
int check_upper(int *ptr,int m)
{
	int i,j,flag=0,c=0;
	for(i=0;i<m;++i)
	{
		for(j=0;j<i;++j)
		{
			if(*(ptr+(i*m+j))==0)
				flag++;
			c++;
		}
	}
	if(flag==c)
		return 1;
	return 0;
}

//Function to check if the matrix is lower triangular matrix
int check_lower(int *ptr,int m)
{
	int i,j,flag=0;
	for(i=0;i<m;++i)
	{
		for(j=i+1;j<m;++j)
		{
			if(*(ptr+(i*m+j))!=0)
				flag++;
		}
	}
	if(flag!=0)
		return 0;
	return 2;
}

//Main function
int main()
{
	puts("****************PROGRAM TO CHECK IF A MATRIX IS UPPER TRIANGULAR OR LOWER TRIANGULAR*******************");
	int m,n,i,j,*p;
	lb:
	puts("\nEnter the size of the matrix:\t");
	scanf("%d %d",&m,&n);
	if(m!=n)
	{
		puts("\nPlease enter order of the square matrix ");
		goto lb;		
	}
	int a[m][m];
	p=&a[0][0];
	puts("\nEnter the elements of the matrix:\n");
	for(i=0;i<m*m;++i)
		scanf("%d",(p+i));
	int flag;
	flag=check_upper(p,n);
	if(flag==1)
	{
		for(i=0;i<m;++i)
		{
			for(j=0;j<m;++j)
			{
				printf("%d\t",*(p+(i*m+j)));
			}
			puts("\n");
		}
		printf("\nThe entered matrix is an upper triangular matrix !");
		
		return 0;
	}
	flag=check_lower(p,n);
	if(flag==2)
	{
		for(i=0;i<m;++i)
		{
			for(j=0;j<m;++j)
			{
				printf("%d\t",*(p+(i*m+j)));
			}
			puts("\n");
		}
		printf("\nThe entered matrix is a lower triangular matrix !");
		return 0;
	}
	for(i=0;i<m;++i)
		{
			for(j=0;j<m;++j)
			{
				printf("%d\t",*(p+(i*m+j)));
			}
			puts("\n");
		}
	printf("\nThe entered matrix is neither upper triangular nor lower triangular matrix !!!");
	return 0;
}

