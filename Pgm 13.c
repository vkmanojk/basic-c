/***********************************************************************************************************
								PROGRAM TO POPULATE AN ARRAY WITH FACTORS OF NUMBER READ	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Global variables
int a[100],j=0;

//Function to populate an array and return the same
int *populate(int p)
{
	int i;
	for(i=1;i<=p/2;++i)
	{
		if(p%i==0)
		{
			a[j++]=i;
		}
	}
	a[j++]=p;
	int *ptr=&a[0];
	return ptr;
}

//Function to display the populated array
void display(int *p)
{
	int i=0;
	printf("\n\nThe populated array is:\n");
	while(j--)
	{
		printf("%d  ",*(p+i));
		i++;
	}
}
//Main function
int main()
{
	puts("\n********************* PROGRAM TO POPULATE AN ARRAY WITH THE FACTORS OF THE NUMBER READ ********************");
	int n,*ptr;
	printf("\n\n\nEnter a number: ");
	scanf("%d",&n);
	printf("\n\nPress any key to populate the array with the factors of %d... ",n);
	getch();
	ptr=populate(n);
	display(ptr);
	return 0;
}
