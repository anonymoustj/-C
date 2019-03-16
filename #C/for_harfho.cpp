#include <stdio.h>

int main ()
{
	char harf;
	
	for (int i=0; i<10; i++)// dar in jo 10 liniya khat 
	{
		for (harf='A'; harf<('A'+6); harf++)// dar injo bosha harfi A=65 pas az 65<71 takror meshavad
		printf ("%c ", harf);																			// ABCDEFJ = 65,66,67,68,69,70,71
		printf ("\n");																					// ABCDEFJ = 65,66,67,68,69,70,71
	}																									// .
		printf("\n");																					// .
	for (int i=0; i<6; i++)																				// ABCDEFJ = 65,66,67,68,69,70,71
	{
		for (harf=('A'+i); harf<('A'+6) ; harf ++ )
			{
			printf ("%c", harf);						//	ABCDEFJ = 65,66,67,68,69,70,71
			}											//  BCDEFJ =  66,67,68,69,70,71
			printf ("\n");								//  CDEFJ =   67,68,69,70,71
														//  DEFJ =    68,69,70,71
	}													// ....
	return 0;											// j =        71
}
