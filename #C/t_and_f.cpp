#include <stdio.h>

int main (void)
{
	int true_val, false_val;
	
	true_val =(10 > 2);
	false_val=(10 == 2);
	
	printf ("true=%d; false=%d\n", true_val, false_val);
	printf("*****************\n\n");
	////////////////////////////////////////////////////////// 
	
	int n=5;
	while (n){ // dar holate agar az nol bolo boshad qikl kor mekunad yane 0<n
	
	
		printf ("%2d is true\n", n--);}
		printf ("%2d is false\n\n", n);
	
	n=-5;
	while (n)
		printf ("%2d is true\n", n++);
		printf ("%2d is false\n", n);
	
}
