 /*      __    _______ ___      ___    ________      _______       ________   _______
        /AA\  |FF_____|MMM\    /MMM|  /  ____  \    /  ____  \    /  ____  \ /3_3_3_3\
       /A/\A\ |FF|___ |MMM_\__/_MMM| |cc|    |cc|  |cc|    |cc|  |cc|    |cc|3/	    /3|
      /A/__\A\|FF____||MM| \__/ |MM| |cc|    |cc|  |cc|    |cc|  |cc|    |cc|   ___/3/
     /A/____\A\FF|    |MM|      |MM| |cc|____|cc|  |cc|____|cc|  |cc|____|cc|  |3_3_3\
    /A/      \A\F|    |MM|      |MM|  \________/____\________/____\________/_______\33\
                                      3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_33/
	*/
#include <stdio.h>
#define SIZE 100

int main ()
{
    int num;
    FILE *ph;
    FILE *copy;
    char fwords [SIZE];
    char mywords[]="\nHello my name is firuz";
    ph= fopen ("text.txt", "r+a");
    copy= fopen ("copy.txt", "w");
    
    if (ph !=NULL && copy != NULL)
    {
        fprintf (stdout, "%10s", "Vashi faili bili uspeshno sozdan i prochitan\n\n");
        fgets (fwords, SIZE, ph);
        fputs (mywords, ph);
        //num =fread (fwords, 1, SIZE, ph);
       // fwrite(fwords, 1, SIZE, copy);
        fprintf (stdout, "%s", fwords);
        printf ("%d simvolov",num);
        fprintf (stdout, "\n\n%10s", "Operqiya bila uspeshno zavershenno.\n");
    }
    else 
    {
        fprintf (stderr, "Operaciya sozdanie faila ne uspeshno bil sozdan!!!\n");
        return 1;
    }

return 0;
}