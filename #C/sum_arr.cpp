#include <stdio.h>
#define SIZE 10

int sump(int *start, int *end);//protatipi funkciya
int main ()
{
	int marbles[SIZE]={10,20,30,40,50,60,70,80,90,100};
	long answer;
	
	answer= sump(marbles, marbles+SIZE);
	printf("The total of marbles is %ld.\n", answer);
	
	return 0;
}
int sump(int *start, int *end)// *- in baroi tamomi malumoti da marbles budaro megirad ba khud 
{
	int total=0;
	while (start<end) // dar injo funkciya dar (marbles[SIZE]) chi kadar rakame vujud dorad hamon kadar funkciyakor mekunad 
	{	printf ("%d ", start);
		total+=*start;//  har yak adadi dar *start(marbles[SIZE]) joigir buda bo khud jamkarda shavad
		
		start++;
	}
	
	return total;
}
