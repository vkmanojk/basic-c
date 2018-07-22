/******************************************************************************************************************************
								PROGRAM TO MANAGE ACCOUNTS	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
******************************************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Global variables 
int n;

//Structure defintion
struct customer
{
	char name[30],street[30],city[30],state[20];
	int accno;
	char type[10];
	float pb,cb,nb;
	int d,m,y;
}a[100];

//Function to update customers record
void update(struct customer *p)
{
	if((p->cb)>0&&(a->cb>(0.1*p->pb)))
	{
		strcpy(p->type,"overdue");
	}
	else if((p->pb)>0&&(p->cb==0))
	{
		strcpy(p->type,"delinquent");
	}
	else
	{
		strcpy(p->type,"current");
	}
	p->nb=p->pb-p->cb;
}

//Function to read and update customer information
void read()
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("\n\nCUSTOMER %d\n",i+1);
		printf("\nEnter customer name: ");
		getchar();
		gets(a[i].name);
		printf("\nEnter customer street,city,state in the same manner(use commas in between): ");
		getchar();
		scanf("%[^\n\t]s,%[^\n\t]s,%[^\n\t]s",&a[i].street,&a[i].city,&a[i].state);
		printf("\nEnter coustomer's account number: ");
		scanf("%d",&a[i].accno);
		printf("\nEnter customer's previous balance and current balance: ");
		scanf("%f %f",&a[i].pb,&a[i].cb);
		printf("\nEnter the payment date(dd/mm/yyyy): ");
		scanf("%d/%d/%d",&a[i].d,&a[i].m,&a[i].y);
		update(&a[i]);
	}
}

//Function to display the customer details
void display()
{
	int i;
	for(i=0;i<n;++i)
	{
		printf("\n\n\nCustomer Name           : %s",a[i].name);
		printf("\nStreet,City,State       : %s,%s,%s",a[i].street,a[i].city,a[i].state);
		printf("\nCustomer account number : %d",a[i].accno);
		printf("\nAccount type            : %s",a[i].type);
		printf("\nPrevious balance        : %f",a[i].pb);
		printf("\nCurrent balance         : %f",a[i].cb);
		printf("\nNew balance             : %f",a[i].nb);
		printf("\nPayment date			  : %d/%d/%d",a[i].d,a[i].m,a[i].y);
	}
}

//Main function
int main()
{
	puts("\n********************************** PROGRAM TO MANAGE ACCOUNTS ************************************");
	printf("\n\n\nEnter the total number of customers to be processed: ");
	scanf("%d",&n);
	printf("\n\nPress any key to read the customer details...");
	getch();
	read();
	printf("\n\nPress any key to display the customer details.... ");
	getch();
	display();
	return 0;
}
