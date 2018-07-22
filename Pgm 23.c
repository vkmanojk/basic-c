/******************************************************************************************************************************
								PROGRAM TO PRINT PERFECT NUMBERS WITHIN A RANGE	  	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
******************************************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function to print perfect numbers within the given range 
void perfect(int m,int n)
{
	int i,j,sum;
	printf("\n\n");
	for(i=m;i<=n;++i)
	{
		sum=0;
		for(j=1;j<=i/2;++j)
		{
			if(i%j==0)
			{
				sum+=j;
			}
		}
		if(sum==i)
		{
			printf("%d  ",i);
		}
	}
}

//Main function
int main()
{
	puts("\n**************************** PROGRAM TO PRINT PERFECT NUMBERS WITHIN A RANGE *******************************\n\n");
	int a,b;
	lb:
	printf("\nEnter the lower limit and upper limit: ");
	scanf("%d %d",&a,&b);
	if(b>a)
	{
		printf("\n\nPress any key to print the perfect numbers between %d and %d.... ",a,b);
		getch();
		perfect(a,b);
	}
	else
	{
		printf("\nUpper limit should be greater than the lower limit ! Please enter again !!!");
		goto lb;
	}
	return 0;
}
