#include <stdio.h>
int main ()
{
	const int FIRST= 46;
	const int SECOND = 20;
	int i,j;
		printf ("%4s%6s\n", "NUM", "COST");
	for (i=1, j= FIRST; i <= 16; i++, j+=SECOND)
	{
		printf ("%4d%6.2f\n", i, j/100.0);
	}
	
//	printf ("NUM2	COST2\n");
//	
//	for (i=1 ; i <=16 ; i++)
//	{
//		for (j=46; j<=16; j+=20){
//				
//		}
//		printf ("%d	%.2f\n", i, j/100.0);	
//	}
	return 0;
}
