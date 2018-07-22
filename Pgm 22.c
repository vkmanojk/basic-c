/******************************************************************************************************************************
								PROGRAM TO CONVERT DECIMAL NUMBER TO BINARY NUMBER USING FUNCTIONS  	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
******************************************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function to convert decimal to binary
int dec_to_bin(int n)
{
	int rem,bin=0,temp=0;
	int num;
	num=n;
	while(n>0)
	{
		rem=n%2;
		temp=temp*10+rem;
		n=n/2;
	}
	while(temp>0)
	{
		rem=temp%10;
		bin=bin*10+rem;
		temp=temp/10;
	}
	if(num%2==0)
		bin=bin*10;
	return bin;
}

//Main function
int main()
{
	puts("\n\n************************* PROGRAM TO CONVERT DECIMAL NUMBER TO ITS BINARY FORM ****************************\n");
	int n,bin;
	printf("\nEnter any decimal number: ");
	scanf("%d",&n);
	printf("\n\nPress any key to convert decimal number to its binary form...");
	getch();
	bin=dec_to_bin(n);
	printf("\nThe binary form of %d is %d",n,bin);
	return 0;
}
