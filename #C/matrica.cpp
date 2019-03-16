#include <stdio.h>

int main (void)
{
	int matrica [3][4]={{1,2,3,4},{1,2,3,4}, {1,2,3,4}};
	int total=0;
	for (int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)
		{
			total=total+matrica[i][j];
			printf ("%d ", matrica [i][j]);
		}
		printf ("\n");
	}
	printf ("total matrica is %d\n", total );
	
	int *matrica2[3][4];
	matrica2[3][4]= &matrica[3][4];
	printf ("matrica2\n%d\n", *matrica2[3][4]);
	printf ("matrica2 adress is %p\n", &matrica2);
	printf ("matrica1 adress is %p\n", &matrica);
}
