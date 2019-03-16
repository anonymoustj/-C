#include <stdio.h>
#define SOL 2019
int main ()
{	

int sol;
int solj=0;
int maoshiavval;
printf ("Az kadom sol shumo sar karde korro?\n Az soli____\b\b\b\b", sol);
scanf ("%d", &sol);
printf ("maoshi avalaaton?\nmaoshi avalaam __________\b\b\b\b\b\b\b\b\b\b" );printf ("som");
scanf ("%d", &maoshiavval);

	printf ("%4s%10s%15s\n", "@", "mablag", "sol");

int average;
average=0;
	while (sol<SOL)
	{
		sol+=1;
		solj+=1;
		maoshiavval =(maoshiavval%13)+maoshiavval;
		printf ("%4d%10d%15d\n", solj, maoshiavval,sol);
		average=average+maoshiavval;
		}
	printf ("Hamagi: %d", average);
return 0;
}
