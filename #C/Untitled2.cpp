#include <stdio.h>
#define NUM 100
#include <string.h>
int main (void)
{
	
	char name [NUM];
	printf ("name %p\n", &name);
	printf ("Enter your name : \n");
	scanf ("%s", &name);
	printf ("Your name is\n%s\n", name );
	printf ("your name %d character\nand adress is %p", strlen(name), &name);
	
	
	
	
}
