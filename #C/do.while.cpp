#include <stdio.h>

int  main()
{
	unsigned int parol=2000;
	int vparol=0;
	
do
{
	printf ("Pleas enter the code: ");
	scanf ("%d", &vparol);

}while (vparol != parol);// dar darun rakamro vorid kardem agar nobarobari parol boshad ongoh funkciya az sari nav ijro meshavad
	
//	for ( ; vparol!=parol ;)
//	{		printf("Please enter the code:");
//		scanf ("%d", &vparol);
//	}
//	printf ("Sucesfully! ");
//	
	return 0;
	
}
