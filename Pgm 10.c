/***********************************************************************************************************
								PROGRAM TO DETERMINE QUADRANT	
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
	puts("\n*************************PROGRAM TO DETERMINE THE QUADRANT OF THE GIVEN POINT************************");
	int x,y;
	printf("\nEnter the coordinate of the point in the form (x,y): ");
	scanf("(%d,%d)",&x,&y);
	if(x>0)
	{
		if(y>0)
		{
			printf("\nThe point (%d,%d) lies in the first quadrant !",x,y);	
		}
		else if(y<0)
		{
			printf("\nThe point (%d,%d) lies in the fourth quadrant !",x,y);
		}	
		else
		{
			printf("\nThe point (%d,%d) lies in the positive x axis !",x,y);
		}
	}
	else if(x<0)
	{
		if(y>0)
		{
			printf("\nThe point (%d,%d) lies in the second quadrant !",x,y);
		}
		else if(y<0)
		{
			printf("\nThe point (%d,%d) lies in the third quadrant !",x,y);
		}
		else
		{
			printf("\nThe point (%d,%d) lies in the negative x axis !",x,y);
		}		
	}	
	else
	{
		if(y==0)
		{
			printf("\nThe point (%d,%d) is the origin !",x,y);
		}
		else if(y>0)
		{
			printf("\nThe point (%d,%d) lies in the positive y axis !",x,y);
		}
		else
		{
			printf("\nThe point (%d,%d) lies in the negative y axis !",x,y);
		}
	}
	return 0;
}
