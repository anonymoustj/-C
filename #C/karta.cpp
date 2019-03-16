#include <stdio.h>
#include <stdlib.h>

int main ()
{
	const char *suit[4]={"dil", "buba", "pasha", "kirpich"};
	const char *znak[] ={"6", "7", "8", "9", "10", "Dama", "Karol", "Tus"};
	const char *face[4]={"FIRUZ", "OMAR", "SOMON", "SIMON"};
	int odamo;
	int kartaho;
	int kkarta;
	for (int i=0; i<4; i++)
	{
		odamo=rand()%4;
		kkarta=rand()%6;
		kartaho=rand()%4;
		printf ("%10s%20s%10s \n", face[odamo], face[odamo], face[odamo]);
		printf ("%10s%s%20s%s%10s%s \n", kkarta[znak],suit[kartaho], kkarta[znak],suit[kartaho], kkarta[znak],suit[kartaho]);
	}
}
