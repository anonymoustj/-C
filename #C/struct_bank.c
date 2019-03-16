#include <stdio.h>

struct student
{
    char name [20];
    char sex;
    int age
};
struct student oila [4]=
{
    {"FIRUZ", 'M', 18 },
    {"FAIZA", 'M', 16 },
    {"FARAKHBAKSH", 'M', 13},
    {"FARIDUN", 'M', 10}
};

int main ()
{   struct student *p;
    printf ("\n\n%s%6s%8s%10s","NUM", "NAME", "SEX", "AGE");
    for (int i=oila; i<oila+4; i++)
    {
        printf ("%s%6s%8s%10s", i, p->name, p->sex, p->age  );
    }
    return 0;
}