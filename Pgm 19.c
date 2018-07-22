/***********************************************************************************************************
								PROGRAM TO FIND THE FREQUENCY OF ELEMENTS IN AN ARRAY 	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Function to find the frequency of elements in an array
void frequency(int a[],int n)
{
     int i,j,k,num,c=0;
     for(i=0;i<n;i++)
     {
          num=a[i];
          c=1;
          for(j=i+1;j<n;j++)
          {
               if(a[j]==num)
               {
                    c++;
                    for(k=j;k<n;k++)
                    {
                         a[k]=a[k+1];
                    }
                    n--;
                    j--;
                }
          }
          printf("\nThe frequency of element %d  is %d",a[i],c);
     }
}

//Function to print the duplicate elements
void duplicate(int a[],int n)
{
	int i,j;
	printf("\n\n\nThe duplicate elements in the array are: ");
  	for(i=0;i<n;i++)
   	{
    	for(j=i+1;j<n;j++)
    	{
    		if(a[i]==a[j])
    		{
    			printf("%d  ",a[j]);
    		}
   		}
   	} 
}

//Function to find the unique elements in the array
void unique(int a[], int n)
{
	int i,j;
	printf("\n\n\nThe unique elements in the array are:\n");
	for (i=0;i<n;i++)
    {
        // Check if the picked element is already printed
        for(j=0;j<i;j++)
           if(a[i]==a[j])
               break;
 
        // If not printed earlier, then print it
        if(i==j)
          printf("%d  ",a[i]);
    }
    
}

//Main function
int main()
{
	puts("\n******************PROGRAM TO FIND THE FREQUENCY OF ELEMENTS IN AN ARRAY**********************\n");
	int i, n;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	int a[n],b[n];
	printf("\nEnter the array elements:\n");
	for(i=0;i<n;++i)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("\nPress any key to get the frequency of the array elements... ");
	getch();
	frequency(a,n);
	printf("\n\n\nPress any key to get the duplicate elements of the array... ");
	getch();
	duplicate(b,n);
	printf("\n\n\nPress any key to get the unique elements of the array... ");
	getch();
	unique(b,n);
	return 0;
}
