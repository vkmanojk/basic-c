/***********************************************************************************************************
								PROGRAM TO CALCULATE POWER OF A NUMBER
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<math.h>

//Function to calculate power
double power(double m, int n)
{
	if(n==0)
	{
		n=2;
	}
	return (pow(m,n));
}

//Main function
int main()
{
	double m;
	int n=0;
	puts("*****************PROGRAM TO CALCULATE POWER OF A NUMBER***********************\n");
	printf("\nEnter the value of base: ");
	scanf("%lf",&m);
	printf("\nEnter the value of number which is to be raised: ");
	scanf("%d",&n);
	printf("\n\nThe power of %.3lf raised to %d is %.3lf",m,n,power(m,n));
	return 0;	
}
