/***********************************************************************************************************
								PROGRAM TO SWAP THREE NUMBERS
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function to swap three numbers
void swap(int *p,int *q, int *r)
{
	int t,temp;
	temp=*p;
	t=*q;
	*p=*r;
	*q=temp;
	*r=t;	
}

//Main function
int main()
{
	puts("\n************************PROGRAM TO SWAP THREE NUMBERS***********************\n");
	int a,b,c;
	puts("\nEnter three numbers to swap:");
	scanf("%d %d %d",&a,&b,&c);
	printf("\nValues before swapping:\na=%d\tb=%d\tc=%d\n",a,b,c);
	puts("Press any key to swap the 3 numbers...");
	getch();
	swap(&a,&b,&c);
	printf("\nValues after swapping:\na=%d\tb=%d\tc=%d\n",a,b,c);
	return 0;
}
