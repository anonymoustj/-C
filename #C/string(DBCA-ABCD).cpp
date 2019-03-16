//#############################################################
// HARFHORO BO TARTIBI MUAYAN JOBAJO KARDAN 
// MASALAN : DCABV->->ABCDV  AFM0003: 18.12.18
//#############################################################
#include <stdio.h>
#include <string.h>

int main ()
{
	int a;
	char text[101][101];
	char c[101];
	
	scanf ("%d", &a);
	
		for (int i=0; i<a; i++ )
		{
			scanf ("%s", &text[i]);
		}
			for (int i=0; i<a; i++)
			{
				for (int j=i+1; j<a; j++)
				{
					if (strcmp (text[i], text[j])>0)
					{
						strcpy(c, text[i]);
						strcpy(text[i],text [j] );
						strcpy(text[j], c);
					}
				}
			}
	for (int i=0; i<a; i++)
	{
	printf ("%s\n", text[i]);
	}
}
