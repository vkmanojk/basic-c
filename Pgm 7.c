/***********************************************************************************************************
								PROGRAM TO INSERT AN ELEMENT IN AN ARRAY
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function to insert the element
void insert(int a[],int n, int item, int pos)
{
	int i;
	for(i=n;i>pos-2;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=item;
	printf("Item %d successfully inserted at %dth postion !\n",item,pos);
}

//Main function
int main()
{
	puts("\n************************PROGRAM TO INSERT AN ELEMENT AT THE GIVEN POSITION*************************\n");
	int i,n,item,pos;
	puts("\nEnter the size of the array:");
	scanf("%d",&n);
	int a[n+1];
	puts("\nEnter array elements:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe entered array is:\n");
	for(i=0;i<n;++i)
	{
		printf("%d ",a[i]);
	}
	puts("\nEnter the element to be inserted:");
	scanf("%d",&item);
	printf("\nEnter the position at which %d is to be inserted: ",item);
	scanf("%d",&pos);
	insert(a,n,item,pos);
	puts("\nPRESS ANY KEY TO DISPLAY THE MODIFIED ARRAY !!! \n");
	getch();
	puts("\nThe modified array is:\n");
	for(i=0;i<n+1;++i)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
