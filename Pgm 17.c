/***********************************************************************************************************
								PROGRAM TO LIST ALL EXPIRED DRUGS	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Global variables
int n,j;
//Structure definitions

//Structure to store the expiry date
struct expiry
{
	int date,month,year;
}d;

//Structure to manipulate drug records
struct drugs
{
	int drug_code;
	char drug_name[30];
	struct expiry exp_date;
	int count;
}a[50],expd[50];

//Function to get the input
void input()
{
	int i;
	printf("\nEnter the number of drugs whose details are to be recorded...");
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		printf("\nEnter the drug %d's code: ",i+1);
		scanf("%d",&a[i].drug_code);
		printf("\nEnter the name of the drug: ");
		getchar();
		scanf("%[^\n\t]s",a[i].drug_name);
		printf("\nEnter %s's expiry date (dd/mm/yyyy): ",a[i].drug_name);
		scanf("%d/%d/%d",&a[i].exp_date.date,&a[i].exp_date.month,&a[i].exp_date.year);
		printf("\nEnter no. of %s present: ",a[i].drug_name);
		scanf("%d",&a[i].count);
	}
	printf("\nEnter the current date (dd/mm/yyyy): ");
	scanf("%d/%d/%d",&d.date,&d.month,&d.year);
}

//Function to count the number of expired drugs
int exp_drugs(struct drugs a[],struct drugs expd[], int n)
{
	int i,count=0;
	j=0;
	for(i=0;i<n;++i)
	{
		if(d.date>a[i].exp_date.date||d.month>a[i].exp_date.month||d.year>a[i].exp_date.year)
		{
			expd[j].drug_code=a[i].drug_code;
			strcpy(expd[j].drug_name,a[i].drug_name);
			expd[j].count=a[i].count;
			expd[j].exp_date.date=a[i].exp_date.date;
			expd[j].exp_date.month=a[i].exp_date.month;
			expd[j].exp_date.year=a[i].exp_date.year;
			count+=expd[j].count;
			j++;
		}
	}
	return count;
}

//Main function
int main()
{
	puts("\n\n****************************** PROGRAM TO LIST EXPIRED DRUGS ********************************\n");
	int choice,count,x;
	lb:
	puts("\n		             MENU	");
	printf("\n1.Input drug records\n2. List expired drugs\n3. Exit\n");
	printf("\nEnter you choice: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		input();
		goto lb;
	}
	else if(choice==2)
	{
		count=exp_drugs(a,expd,n);
		printf("\nEXPIRED DRUGS: \n");
		for(x=0;x<j;++x)
		{
			printf("Expired drug: %d\n",x+1);
			printf("\n1. Drug code                 : %d",expd[x].drug_code);
			printf("\n2. Drug name                 : %s",expd[x].drug_name);
			printf("\n3. Expiry date 			   : %d/%d/%d",expd[x].exp_date.date,expd[x].exp_date.month,expd[x].exp_date.year);
		}
		printf("\nA total of %d drugs have been expired !!!! ",count);	
		goto lb;
	}
	else if(choice==3)
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
