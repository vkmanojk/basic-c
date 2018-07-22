/***********************************************************************************************************
								PROGRAM TO COMPUTE THE SUM OF ARRAY ELEMENTS	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Main function
int main()
{
	puts("\n******************************* PROGRAM TO ADD ARRAY ELEMENTS USING POINTERS **********************************\n");
	int i,n,*p=NULL;
	int sum=0;
	printf("\nEnter the array size: ");
	scanf("%d",&n);
	int a[n];
	p=&a[0];
	puts("\nEnter array elements: \n");
	
	//To get array input
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	}
	printf("\nThe entered array is:\n");
	
	//To display the entered array and to calculate the sum
	for(i=0;i<n;++i)	
	{
		printf("%d  ",*(p+i));
		sum+=*(p+i);
	}
	
	
	printf("\nThe sum of array elements is: %d ",sum);
	return 0;
}
