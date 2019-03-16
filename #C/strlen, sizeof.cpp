#include <stdio.h>
#include <string.h>// baroi funkciyai strlen()
#define FAMILIYA "Abdulhaqov"//konstant  bo jumla boshad boyad ("") monem 
int main ()
{
	char name[10];
	int size;
	
	printf ("\nWhat is your name: \n");
	printf ("My name is _____\b\b\b\b\b");//  manoi dar joi muayankardai khudamon boyad navisem 
	scanf("%s", &name );
	
	printf ("Your name has a %d symbol.\n", strlen(name)); //  hisob mekunad ki dar kalima chand harf hast 
	printf ("\n**************************\n**************************\n\n");
	printf ("The size of your name is %d bytes, %d alpabet", sizeof(name), strlen (name));// hisob mekunad kia az chand byte iborat ast 
	
	printf ("\nYour surname is %s, size is %d\n\n", FAMILIYA, sizeof(FAMILIYA));
	return 0;
	}
