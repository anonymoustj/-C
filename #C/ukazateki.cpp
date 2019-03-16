#include <stdio.h>

int main ()
{
	int a=1;
	int b=2;
	
	int *num_a=NULL;
	int *num_b=NULL;
	
	num_a=&a;
	num_b=&b;
	
	printf ("the number A is %d\nthe number B is %d\n\n", a, b);
	printf ("the adress A is %d\nthe adress B is %d\n\n", num_a, num_b);
	printf ("the pointer A is %d\nthe pointer B is %d\n\n", *num_a, *num_b);
	
	return 0;
}
