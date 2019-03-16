#include <stdio.h>// стандартная библиотека вывод ввода
#include <string.h>// для strlen 

struct inf
{
    char fname[20];
    char lname[20];
    int letters;
};
void getinfo (struct inf *);// прототип функция для получения информация 
void makeinfo (struct inf *);// для того чтобы обрабатывать функцию
void showinfo (struct  inf*);// для показа информация 
char * s_gets (char *st, int n);//для того чтобы вводит информацию

int main ()
{
    struct inf person;// person как имя переменная 

    getinfo  ( &person );
    makeinfo ( &person );
    showinfo ( &person );

return 0;
}

void getinfo (struct inf *pct)
{
    printf ("Please Enter your name\n");
    s_gets (pct->fname, 20 );// вызываем функцию  и добавляем  на её свою данные
    printf ("Please enteer your last name:\n");
    s_gets (pct ->lname, 20);// вызовааем ффункцию  и добавляем информацию
}
char * s_gets (char *st, int n)
{
    char *tamp;
    char *srch;

    tamp= fgets (st, 20, stdin);// в tamp сохряняем свои данные  которые выводим через fgets

    if (tamp)
    {
        srch= strchr (st, '\n');// stchr (текст которые нужно искать, символ каторые нужно искать в тексте)
        if (srch)// если функция истина то 
        {
            *srch ='\0';// 
        }
    }
    else 
    {
        while (getchar ()!= '\n')
        continue;
    }
    return tamp;
}
void makeinfo (struct inf * pct)
{
    pct -> letters =strlen(pct->fname)+strlen (pct->lname);//здес будеть считать сколько символов у нас в массиве 

    return pct->letters;
}

void showinfo (struct inf *pct )
{
    printf ("%s %s, yor name contains %d letters \n\n", pct->fname, pct->lname, pct->letters);
}
