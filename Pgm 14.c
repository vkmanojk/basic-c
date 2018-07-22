/***********************************************************************************************************
								PROGRAM TO COMPUTE THE ROW SUM OF A MATRIX	
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
	puts("\n************************PROGRAM TO COMPUTE THE ROW SUMS OF THE MATRIX***************************\n");
	int i,j,m,n,*p;
	printf("\nEnter the order of the matrix: ");
	scanf("%d %d",&m,&n);
	int sum[m];
	int a[m][n];
	p=&a[0][0];
	
	//To get metrix elements
	printf("\nEnter matrix elements:\n");
	for(i=0;i<m;++i)
	{
		sum[i]=0;
		for(j=0;j<n;++j)
		{
			scanf("%d",((*(a))+(i*n+j)));
		}
	}
	
	//To display the entered matrix
	printf("\nThe entered matrix is:\n");
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			printf("%d ",*(*(a+i)+j));
		}
		printf("\n");
	}
	puts("\nPress any key to calculate row sums of the matrix...");
	getch();
	
	//To calculate the row sum
	for(i=0;i<m;++i)
	{
		for(j=0;j<n;++j)
		{
			sum[i]=sum[i]+(*(*(a+i)+j));
		}
		printf("The sum of row %d is %d\n",i+1,sum[i]);
	}
	return 0;
}
