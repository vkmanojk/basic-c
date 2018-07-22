/***********************************************************************************************************
								PROGRAM TO MANIPULATE A STRING WITHOUT USING STRING FUNCTIONS 	
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>

//Macro definition
#define MAX 255

//Function to find the length of the string
void str_len(char ch[])
{
	int i,count=0;
	for(i=0;ch[i]!='\0';++i)
	{
		count++;
	}
	printf("\nThe length of the string %s is:   %d\n",ch,count);
}

//Function to list the characters one by one
void str_char(char ch[])
{
	int i;
	printf("\n\n%s printed character by character,",ch);
	for(i=0;ch[i]!='\0';++i)
	{
		printf("\n%c",ch[i]);
	}
	printf("\n");
}

//Function to count the number of words
void wordcount(char ch[])
{
	int i,count=0;
	for(i=0;ch[i]!='\0';++i)
	{
		if(ch[i]==' ')
		{
			count++;
		}
	}
	printf("\n\nThe total no. of words in %s is: %d\n",ch,count+1);
}

//Function to count maximum occuring character
void max_char(char ch[])
{
	int ascii,i,frequency[MAX];
	int f;
	for(i=0;i<=MAX;++i)
	{
		frequency[i]=0;
	}
	
	for(i=0;ch[i]!='\0';++i)
	{
		ascii=(int)ch[i];
		frequency[ascii]+=1;
	}
	
	f=0;
	for(i=0;i<=MAX;++i)
	{
		if(frequency[i]>frequency[f])
			f=i;
	}
	printf("\n\nThe character %c occurrs %d times. This is the maximum occurance !!!\n",(char)f,frequency[f]);	
}

//Main function
int main()
{
	puts("********************** PROGRAM TO MANIPULATE A STRING WITHOUT USING STRING FUNCTIONS ************************\n");
	char ch[100];
	printf("\nEnter the string: ");
	gets(ch);
	printf("\nPress any key to find the string length...  \n ");
	getch();
	str_len(ch);
	printf("\nPress any key to list the characters one by one... \n ");
	getch();
	str_char(ch);	
	printf("\nPress any key to count the no. of words in the string... \n ");
	getch();
	wordcount(ch);
	printf("\nPress any key to find the maximum occuring character... \n ");
	getch();
	max_char(ch);
	return 0;
}
