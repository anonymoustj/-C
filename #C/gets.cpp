#include <stdio.h>
#define N 10
int main (void)
{
char words [N];
int i;

	while (fgets(words, N, stdin) != NULL && words[0] !='\n')
	{
	i=0;
		while (words[i] != '\n' && words[i] != '\0')
		{
			i++;
		}
		if (words[i] == '\n')
		words [i]='\0';
		else 
			while (getchar () != '\n')
			continue;
	puts (words);
	i++;
}
}
