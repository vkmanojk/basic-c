/***********************************************************************************************************
								PROGRAM TO MANIPULATE STRING FUNCTIONS
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Main function
int main()
{
	char str[50];
	puts("\n***********PROGRAM TO COUNT NO OF VOWELS, CONSONANTS, DIGITS AND WHITE SPACES**************\n");
	printf("\nEnter a string:\t");
	scanf("%[^\n\t]s",&str);
	int i,l;
	int digit=0,consonants=0,vowels=0,space=0;
	l=strlen(str);
	for(i=0;i<l;++i)
	{
		switch(str[i])
		{
			//To count no of vowels 
			case 'a':
			case 'A':
			case 'e':
			case 'E':
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
			case 'U':
				vowels++;
				break;
			//To count no of digits
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':
			case '0':
				digit++;
				break;
			//To count no of white spaces
			case ' ':
				space++;
				break;			
			//To count no of consonants
			default : consonants++;
		}
			
	}
	printf("\nThe number of vowels in %s     = %d",str,vowels);
	printf("\nThe number of consonants in %s = %d",str,consonants);
	printf("\nThe number of digits in %s     = %d",str,digit);
	printf("\nThe number of spaces in %s     = %d",str,space);
	return 0;
}
