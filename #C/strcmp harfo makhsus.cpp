#include <stdio.h>
#include <string.h>
#define LINE 6

int main ()
{
	const char *lesson[LINE] ={"astronomiya", "algebra", "astrophisics", "ostrasize", "asterism", "astrophobiya"};
	int count;
	count=0;
	char a[] ="lesson ";
	for (int i=0; i<LINE; i++)
	{
		if (strncmp(lesson[i], "astro", 5)==0)
		{
			printf ("%s\n", lesson[i]);
			count++;
		}
	}
	count =0;
	for (int i=0; i<LINE; i++)
	{
		if (strncmp(lesson[i], "astro", 5)==0)
		{	
			strncat (a,lesson[i],5);
			printf ("%s\n", a);
			count++;
		}
return 0;
	}
}
