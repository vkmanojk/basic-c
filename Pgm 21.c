/******************************************************************************************************************************
								PROGRAM TO FIND THE SUM OF GIVEN SERIES USING FUNCTION  	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
******************************************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function to calculate sum of the given series
int series_sum(int n)
{
	int i,j,sum=0,fac;
	for(i=1;i<=n;++i)
	{
		fac=1;
		for(j=1;j<=i;++j)
		{
			fac=fac*j;
		}
		sum=sum+(fac/i);
	}
	return sum;
}

//Main function
int main()
{
	puts("\n********************** PROGRAM TO FIND THE SUM OF GIVEN SERIES USING FUNCTION *************************\n\n");
	int n,sum;
	printf("\nEnter the value for n:  ");
	scanf("%d",&n);
	printf("\nPress any key to find the sum of the given series...");
	getch();
	sum=series_sum(n);
	printf("\n\nThe sum of series 1!/1+2!/2+3!/3+4!/4+...+n!/n is:  %d",sum);
	return 0;
}
