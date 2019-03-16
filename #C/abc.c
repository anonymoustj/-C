#include <stdio.h>
#include <string.h>
int main ()
{
    FILE *fm;
    fm = fopen ("abc.txt", "w");

    if (fm != NULL)
    {
        printf ("Поздравляем !!!\nФайл успешно создан!!!");
    }
    else
    {
        fprintf(stderr, "ERROR");
        return 1;
    }
    return 0;
}