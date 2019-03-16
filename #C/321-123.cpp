#include <stdio.h>
#include <string.h>

int main ()
{
	int num, a;
	int n[100];
	printf ("afsjlajb: ");
	scanf ("%d", &num);
	
	for (int i=0; i<num; i++)
	{
		scanf ("%d", &n[i]);
	}
	
	for (int i=0; i<num; i++)
	{
		for (int j=i+1; j<num; j++)
		{
			if ((n[i]-n[j])>0)
			{
				a=n[i];
				n[i]=n[j];
				n[j]=a;
			}
		}
	}
	for (int i=0; i<num; i++ )
	{
		printf("%d", *n+i);
	}
	return 0;
}
