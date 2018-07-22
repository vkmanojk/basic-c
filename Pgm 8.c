/***********************************************************************************************************
								PROGRAM TO SORT THE DETAILS OF A BOX
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//structure defintion
struct box
{
	float l,b,h,v;//l-length b-breadth h-height v-volume
}a[50];

//Global variables
int n;

//Function to input all the necessary details
void input()
{
	int i;
	printf("\nEnter the value for n: ");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("\nBOX %d",i+1);
		printf("\nEnter the length, breadth and height of the box: ");
		scanf("%f %f %f",&a[i].l,&a[i].b,&a[i].h);
	}
}

//Function to calculate volume of each box...
void calculate()
{
	int i;
	for(i=0;i<n;++i)
	{
		a[i].v=a[i].b*a[i].h*a[i].l;
	}
}

//Function to sort the boxes wrt their volume
void sort()
{
	int i,j;
	float temp;
	
	//Linear sort
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<n;++j)
		{
			if(a[j].v<a[i].v)
			{
				//To swap the length
				temp=a[i].l;
				a[i].l=a[j].l;
				a[j].l=temp;
				
				//To swap breadth
				temp=a[i].b;
				a[i].b=a[j].b;
				a[j].b=temp;
				
				//To swap height
				temp=a[i].h;
				a[i].h=a[j].h;
				a[j].h=temp;
				
				//To swap volume
				temp=a[i].v;
				a[i].v=a[j].v;
				a[j].v=temp;
			}
		}
	}
}

//Function to display the details of the boxes
void disp()
{
	int i;
	printf("\nS.No\t Length  \tBreadth  \tHeight  \tVolume\n");
	for(i=0;i<n;++i)
	{
		printf("\n%d\t%f\t%f\t%f\t%f",i+1,a[i].l,a[i].b,a[i].h,a[i].v);
	}
}

//Main function
int main()
{
	puts("\n*************PROGRAM TO SORT THE BOXES WRT THEIR VOLUME***************\n");
	input();
	calculate();
	puts("\nThe details of the boxes before sorting...");
	disp();
	sort();
	puts("\n\n\nPress any key to display the details of boxes after sorting...");
	getch();
	disp();
	return 0;
}
