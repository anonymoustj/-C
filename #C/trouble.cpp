#include <stdio.h>
int main ()
{
	int num;
	int sum=0;
	int status;
	
	printf ("Please enter an  integer to be summed (q to quit) :");
	status=scanf ("%d",&num);
	// while dar holate ki fakat true boshad yane fakat rakamho gayr az harf
	while (status==1)
	{
		sum += num;// har yak adadi voridkardaro ba hamdigar jam karda dar peremenai SUM malumotro sokhranit mekunad
		printf ("Please enter an  integer to be summed (q to quit) :");
		status=scanf ("%d", &num);
	}
	printf ("Those integers sum to %d", sum);
	
	return 0;
}
