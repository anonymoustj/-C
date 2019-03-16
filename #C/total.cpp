#include <stdio.h>
#define SIZE 20
int main (void)
{
	char string1[SIZE];
	char string2[]="string leteral";
	
	printf ("%s", "Enter a string (no lomger than 19 characters)");
	scanf ("%19s", string1);
	
	printf ("string 1 is: %s\nstring 2 is %s\n"
	        "string 1 with spaces beetwn characters is \n", 
			string1, string2);
			
			for (int i=0; i<SIZE && string1[i]!='\0'; ++i)
			{
				printf ("%c ", string1[i]);
			}
}
