#include <stdio.h>

int main ()
{
	int num =10;
	
	int *num2;
	int *num3;
	int *num4;

	num2=&num;
	num3=&num;
	num4=&num;

	printf ("num is %d", num);
	printf ("\nnum adress is %p\n", &num);
	
	printf ("num2 is %d\n", *num2);
	printf ("num2 adress is %p\n", &num);
	
	printf ("num3 is %d\n", *num3);
	printf ("num3 adress is %p\n", &num3);
	
	printf ("num4 is %d\n", *num4);
	printf ("num4 adress is %p", &num4);
	return 0;
}
