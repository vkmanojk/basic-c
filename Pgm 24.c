/******************************************************************************************************************************
								PROGRAM TO CALCULATE THE SUM OF DIGITS USING RECURSION  	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
******************************************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Recursive function to calculate the sum of digits
int sumofdigits(int n)
{
	int sum,rem;
	if(n==0)
	{
		return 0;
	}
	else
	{
		rem=n%10;
		sum=rem+sumofdigits(n/10);
	}
	return sum;
} 

//Main function
int main()
{
	puts("\n\n********************** PROGRAM TO FIND THE SUM OF DIGITS USING RECURSION **********************\n\n");
	int n,sum;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	printf("\n\nPress any key to find the sum of digits in %d...",n);
	getch();
	sum=sumofdigits(n);
	printf("\n\nThe sum of digits in %d is %d",n,sum);
	return 0;
}
