#include <stdio.h>
#include <string.h>

int main ()
{
	char name[100]="ABDULHAQOV ";
	char name1[10];
	
	scanf ("%s", &name1);
	if (strcmp("FIRUZ",name1)||strcmp ("Firuz", name1)||strcmp("firuz", name1)==0)
	{
	printf ("%s", strcat(name, name1));
}
else {
	puts("Bye!");
}
	return 0;
}
