/***********************************************************************************************************
								PROGRAM TO REVERSE A STRING
								BY,
								VK. MANOJ KUMAR
								CB.EN.U4CSE17040
***********************************************************************************************************/

//List of header files
#include <stdio.h>
#include <string.h>
 
//Function declaration
void reverse(char [], int, int);

//Main function
int main()
{
    char str1[20];
    int size;
 	puts("*******************PROGRAM TO REVERSE A STRING***********************\n\n");
    printf("\nEnter a string to reverse: ");
    scanf("%[^\n\t]s", str1);
    size = strlen(str1);
    reverse(str1, 0, size - 1);
    printf("\nThe string after reversing is: %s\n", str1);
    return 0;
}
 
//Function to reverse a string
void reverse(char str1[], int index, int size)
{
    char temp;
    if (index == size / 2)
    {
        return;
    }
    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;
    reverse(str1, index + 1, size);
}
