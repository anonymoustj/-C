#include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[80] , s2[80] ; 
	printf ("**************************\n");
	printf ("Strcat ()\n");
	puts("Yakum jumla");
	gets (s1);// vorid kardani jumla 
	puts("Duyum jumla");
	gets (s2);//vorid kardani jumla 
	strcat (s2, s1);// jumlai yakumro girifta pesh az jumlai yakum meguzorad |||||| s2=s1s2
	printf (s2);
	printf ("\n**************************\nstrlen ()\n\n");
	printf ("%d byte", strlen(s2));
	printf ("\n**************************\n");
	printf (" \nSize %d", sizeof(s2));
	return 0;

}
