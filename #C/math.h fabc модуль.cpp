#include <stdio.h>
#include <math.h>
								//      main()
								//      {
								//        double numbr, absval;
								//        scanf ("%lf", &numbr);
								//        absval = fabs(numbr);
								//        printf("fabs ot (%f) ravno v %f\n", numbr, absval);
								//      }
int main (void)
{
const double pi = 3.14159;
double num;

printf ("Enter the number: ");
scanf ("%lf", &num);

	
	while ( fabs(num - pi) > 0 ) // dar holate ki NUM - PI kaloni nol boshad qikli mo kor mekunad.
	{
		printf ("Try again");
		scanf ("%lf", &num);
	}
	
	printf ("Close enough!\n");
	
	return 0;
	
}
