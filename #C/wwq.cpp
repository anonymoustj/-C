#include <stdio.h>

int main ()
{
	int n;
	int num[10000];
	int dop;
	int nnum[10000];
	int dop2;
	scanf ("%d", &n);
	
for (int i=0; i<n; i++)
{
	scanf ("%d %d", &num[i], &nnum[i]);
}
for (int i=0; i<n; i++)
{
	for (int j=i+1; j<n; j++)
	{
		if (num[i]-num[j]>0)
		{
			dop=num[i];
			num[i]=num[j];
			num[j]=dop;
		}
	}

}
for (int i=0; i<n; i++)
{
	for (int j=i+1; j<n; j++)
	{
		if (nnum[i]-nnum[j]>0)
		{
			dop2=nnum[i];
			nnum[i]=nnum[j];
			nnum[j]=dop2;
		}
	}
}

for (int i=0; i<n; i++)
{
	printf ("%d %d\n", num[i], nnum[i]);
}
}
