/***********************************************************************************************************
								PROGRAM TO COMPUTE LCM AND GCD	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function prototype
void lcm_gcd(int, int, int*, int*);

//Main function
int main()
{
	puts("\n************************** PROGRAM TO COMPUTE LCM AND GCD OF TWO POSITIVE INTEGERS**********************\n\n");
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("\nEnter two non zero integers: ");
	scanf("%d %d",p,q);
	lcm_gcd(a,b,p,q);
	return 0;
}

//Function defintion
void lcm_gcd(int a, int b, int *p, int *q)
{
	int i,lcm,gcd;
	
	for(i=1;i<=a&&i<=b;++i)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	lcm=(a*b)/gcd;
	printf("\nThe GCD of %d and %d is: %d",*p,*q,gcd);
	printf("\nThe LCM of %d and %d is: %d",*p,*q,lcm);
}
