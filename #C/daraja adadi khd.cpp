#include <stdio.h>
int main (void)
{
	int num;
	printf ("input n:\n");
	scanf ("%d", &num);
	int term=0;
	int total=1;
	
	for (int i=1; i<=num; i++)
	{
		total=1;
		for (int j=1; j<=i; j++)
		{
		total*=i;
		}
		term+=total;
	}
	printf ("total %d", term);
}
