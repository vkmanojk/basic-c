/***********************************************************************************************************
								PROGRAM TO PERFORM LIBRARY MANAGEMENT	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Global variables
int n;

//Structure definition
typedef struct month_year
{
	char month[10];
	int year;
} my;
struct box
{
	int accno;
	char title[30];
	float price;
	my var;
	char publications[20];	
}a[100];

//Function to read the details from the user
void input()
{
	printf("\nEnter the no. of books whose data is to be recorded: ");
	scanf("%d",&n);
	int i;
	for(i=0;i<n;++i)
	{
		printf("\nBook %d\n",i+1);
		printf("\nEnter the acc number: ");
		scanf("%d",&a[i].accno);
		printf("\nEnter the title of the book: ");
		getchar();
		scanf("%[^\n\t]s",a[i].title);
		printf("\nEnter the price of the book: ");
		scanf("%f",&a[i].price);
		printf("\nEnter the month and year of publication: ");
		getchar();
		scanf("%s %d",a[i].var.month,&a[i].var.year);
		printf("\nEnter the name of the publisher: ");
		getchar();
		scanf("%[^\n\t]s",a[i].publications);
	}
	printf("\nSuccessfully read all the datas !!! ");
}

//Function to search for a book
struct box *search()
{
	int item;
	struct box *ptr;
	printf("\nEnter the accession number of the book to be searched: ");
	scanf("%d",&item);
	int i;
	for(i=0;i<n;++i)
	{
		if(a[i].accno==item)
		{
			ptr=&a[i];	
		}	
	}
	return ptr;
}

//Function to display the details of the book 
void disp()
{
	int i,y;
	printf("\nEnter current year: ");
	scanf("%d",&y);
	for(i=0;i<n;++i)
	{
		if(a[i].var.year==y)
		{
			printf("\nAcc No.      : %d ",a[i].accno);
			printf("\nTitle        : %s ",a[i].title);
			printf("\nPrice        : %f ",a[i].price);
			printf("\nMonth        : %s ",a[i].var.month);
			printf("\nYear         : %d ",a[i].var.year);
		}
	}
}

//Main function
int main()
{
	puts("\n****************************PROGRAM TO PERFORM LIBRARY MANAGEMENT******************************\n\n");
	int ch;
	struct box *p;
	lb:
		printf("\nEnter your choice:\n");
		printf("\n1.Input book details\n2.Search for a book\n3.Display book details\n4.Exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			input();
			goto lb;
		}
		else if(ch==2)
		{
			p=search();
			printf("\nAcc no       : %d ",p->accno);
			printf("\nTitle        : %s ",p->title);
			printf("\nPrice        : %f ",p->price);
			printf("\nMonth        : %s ",p->var.month);
			printf("\nYear         : %d ",p->var.year);
			goto lb;
		}
		else if(ch==3)
		{
			disp();
			goto lb;
		}
		else if(ch==4)
		{
			exit(1);
		}
		else
		{
			printf("\nWrong choice !!!");
			goto lb;
		}
	return 0;	
}
