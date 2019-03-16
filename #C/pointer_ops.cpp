#include <stdio.h>
#define STAR "*********************************************************************"
int main ()
{
	int num[5]={1,2,3,4,5};
	int *x1, *x2, *x3;
	
	x1=num;
	x2=&num[2];

	printf ("%s\n", STAR);
	printf ("\n%4s%30s%30s", "pointer value", "dereferenced pointer","pointer aderess:\n");
	printf ("\n%4p%20d%35p\n", x1, *x1, &x1);// x1=adressh
	printf ("%s\n", STAR);
	
	//zhi zheng jia fa 
	x3=x1+4;
	printf ("\nadding an int to a pointer:\n");
	printf ("x1+4=%p			*(x1+4)=%d\n\n", x1+4, *(x1+4));
	printf ("%s\n", STAR);

	x1++;
	printf("\nvalues after x1++\n");
	printf ("x1=%p, *x1=%d &x1=%p\n\n", x1, *x1, &x1);
	printf ("%s\n", STAR);
}
