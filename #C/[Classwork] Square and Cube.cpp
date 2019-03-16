#include <stdio.h>

int main ()
{
	int a;
	int b[100];
	int i;
	 scanf ("%d", &a);
	 for ( i=0; i<a; i++)
	 	{
	 	scanf ("%d", & b[i]);
		}	
	 for ( i=0; i<a; i++)
		{
	 	printf ("%d	%d\n", b[i]*b[i], b[i]*b[i]*b[i]);
		}
	 return 0;
}
