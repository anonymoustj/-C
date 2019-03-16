#include <stdio.h>

int main ()
{
    FILE *ff;
    ff = fopen ("New_FIle.txt", "w");

    if (ff!=NULL)
    {
        printf ("Succesfully!\n");
    }
    else
 {
     fprintf (stderr, "ERROR FILE IS NOT SAVED!!!\n");
     return 1;
    }
return 0;
}