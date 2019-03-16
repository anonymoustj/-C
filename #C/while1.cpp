#include <stdio.h>

int main ()
{
	int num;
	int av=0;
	int status;
	printf ("Enter the number: ____\b\b\b\b ");
	scanf ("%d", &num);
	
	while (status==1) // har yak raqami vorid mekunem ba 1 ==barobar ast agar harf vorid kunem faoliyatashro gum mekund 
	{
		av=av+num;// har rakami voridkardaro ba hamdigar jam mekunad 
		printf ("Enter the number:");
		status=scanf ("%d", &num); 
		printf ("statusi ->%d\n", status);
	}
	printf ("sum is %d", av);
	return 0;
}
