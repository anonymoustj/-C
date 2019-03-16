#include <stdio.h>
#include <string.h>

int main ()
{
int n;
char name[100];
printf ("How many people? ");
scanf ("%d", &n);
	
	for (int i=1; i<=n; i++)
	{	
		printf ("Write the %d name: ", i);
		scanf ("%s", name);
	}
	
return 0;
}
