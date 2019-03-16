#include <stdio.h>

int main ()
{
	int num;
	int num1;
	
	printf ("Enter the two number and i tell you which integer a bigger:\n");
	printf ("\nFirst number ___\b\b\b");
	scanf ("%d", &num);
	printf ( "Second number ___\b\b\b");
	scanf ("%d", &num1);
	printf ("\n%d bigger than %d", num > num1 ? num : num1, num<num1 ? num:num1);
	// dar injo  avval mebinem ki kadom adad va formulai dodagiamon tugri megirad hamon adadro meguzorem 
	
	return 0;
}
