 /*      __    _______ ___      ___    ________      _______       ________   _______
        /AA\  |FF_____|MMM\    /MMM|  /  ____  \    /  ____  \    /  ____  \ /3_3_3_3\
       /A/\A\ |FF|___ |MMM_\__/_MMM| |cc|    |cc|  |cc|    |cc|  |cc|    |cc|3/	    /3|
      /A/__\A\|FF____||MM| \__/ |MM| |cc|    |cc|  |cc|    |cc|  |cc|    |cc|   ___/3/
     /A/____\A\FF|    |MM|      |MM| |cc|____|cc|  |cc|____|cc|  |cc|____|cc|  |3_3_3\
    /A/      \A\F|    |MM|      |MM|  \________/____\________/____\________/_______\33\
                                      3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_33/
	*/
#include <stdio.h>
#define SSS "********************"
int main ()
{
	char  *name[1000];
	int birth;
	puts(SSS);
	puts(SSS);
	puts("     ZODIAK");
	puts(SSS);
	puts(SSS);

	printf ("\n\nEnter your name: _____\b\b\b\b\b");
	scanf ("%s", &name );
	printf ("Enter your birth year and i tell your zodiak: ");
	scanf ("%d", &birth);
	
	if (birth==1948 ||birth==1960 ||birth ==1972 || birth==1984 || birth==1996|| birth==2008 || birth==2020||birth==2032)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Mouse\n");
	}
	 if (birth==1948+1 ||birth==1960+1 ||birth ==1972+1 || birth==1984+1 || birth==1996+1|| birth==2008+1 || birth==2020+1||birth==2032+1)
	{ 	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Bull\n");
	}
	  if (birth==1948+2 ||birth==1960+2 ||birth ==1972+2 || birth==1984+2 || birth==1996+2|| birth==2008+2 || birth==2020+2||birth==2032+2)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Tiger\n");
	}
	if(birth==1948+3 ||birth==1960+3 ||birth ==1972+3 || birth==1984+3 || birth==1996+3|| birth==2008+3 || birth==2020+3||birth==2032+3)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Rebbit\n");
	}
	  if  (birth==1948+4 ||birth==1960+4 ||birth ==1972+4 || birth==1984+4 || birth==1996+4|| birth==2008+4 || birth==2020+4||birth==2032+4)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Fish\n");
	}
  if(birth==1948+5 ||birth==1960+5 ||birth ==1972+5 || birth==1984+5 || birth==1996+5|| birth==2008+5 || birth==2020+5||birth==2032+5)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Snake\n");
	}
	  if(birth==1948+6 ||birth==1960+6 ||birth ==1972+6 || birth==1984+6 || birth==1996+6|| birth==2008+6 || birth==2020+6||birth==2032+6)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Hourse\n");
	}
	  if (birth==1948+7 ||birth==1960+7 ||birth ==1972+7 || birth==1984+7 || birth==1996+7 || birth==2008+7  || birth==2020+7||birth==2032+7)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Sheep\n");
	}
	  if(birth==1948+8 ||birth==1960+8 ||birth ==1972+8 || birth==1984+8 || birth==1996+8|| birth==2008+8 || birth==2020+8||birth==2032+8)
	{ 	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Monkey\n");
	}
  if (birth==1948+9 ||birth==1960+9 ||birth ==1972+9 || birth==1984+9 || birth==1996+9|| birth==2008+9 || birth==2020+9||birth==2032+9)
	{printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Cock\n");
	}
	  if (birth==1948+10 ||birth==1960+10 ||birth ==1972+10 || birth==1984+10 || birth==1996+10|| birth==2008+10 || birth==2020+10||birth==2032+10)
	{	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Dog\n");
	}
	  if (birth==1948+11 ||birth==1960+11 ||birth ==1972+11 || birth==1984+11 || birth==1996+11|| birth==2008+11 || birth==2020+11||birth==2032+11)
	{	
	printf ("Name: %s\n", name);
		printf ("Birth: %d\n", birth);
		printf ("Your zodiak Pig\n");
	}
	else 
	printf ("Thank you!");
	return 0;
}
