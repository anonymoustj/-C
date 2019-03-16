// структура в языке Си
#include <stdio.h>
#define SIZE 20

const char * msg[5]=
{
    "   Thank you for the wonderful evening, ",
    "You certainily prove that a ",
    "is a spcial kind of guy. We must get together", 
    "over a delecious ",
    "and hav a few laughs"
};
struct names
{
    char first[SIZE];
    char last [SIZE];
};
struct info
{
    struct names odamo;
    char favfood [SIZE];
    char job [SIZE];
    
};

int main ()
{
    struct info odam =
    {
        "FIRUZ", "ABDULHAQOV",
        "grilled salmon", "personality coach",
    };
    printf("Dear %s\n\n", odam.odamo.first);
    printf ("%s%s.\n", msg[0], odam.odamo.last);
    printf ("%s%s\b", msg[1], odam.job);
    printf ("%s\n", msg[2]);
    printf ("%s%s%s\n",msg[3],odam.favfood, msg[4]);
    
    
    printf("\n%40s%s\n", " ","See you soon");
    printf ("%40s%s\n", " ", "Shalala");


return 0;
}