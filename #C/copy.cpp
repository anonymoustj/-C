#include <stdio.h>

int main (void)
{
	const char *mesg = "Don't be a fool!";
	const char *copy;
	
	copy=mesg;// adresoshon barobari hadigar shud 
	printf ("%s\n", copy);
	
	printf ("\nmesg = %s;\n&mesg = %p;\nvalue = %p\n\n", mesg, &mesg, mesg);
	printf ("copy = %s;\n&copy = %p;\nvalue = %p\n\n", copy, &copy, copy);
	
	return 0;
} 
