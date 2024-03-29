#include < stdio.h >  //Для printf, fgets, fopen, fclose, feof

int main (void)
{  
   // Переменная, в которую будет помещен указатель на созданный
   // поток данных 
   FILE *mf;
   // Переменная, в которую поочередно будут помещаться считываемые строки
   char str[50];

   //Указатель, в который будет помещен адрес массива, в который считана 
   // строка, или NULL если достигнут коней файла или произошла ошибка
   char *estr;

   // Открытие файла с режимом доступа «только чтение» и привязка к нему 
   // потока данных
   printf (“Открытие файла: ”);
   mf = fopen (“test.txt”,”r”);

   // Проверка открытия файла
   if (mf == NULL) {printf (“ошибка\n”); return -1;}
   else printf (“выполнено\n”);

   printf (“Считаны строки:\n”);

   //Чтение (построчно) данных из файла в бесконечном цикле
   while (1)
   {
      // Чтение одной строки  из файла
      estr = fgets (str,sizeof(str),mf);

      //Проверка на конец файла или ошибку чтения
      if (estr == NULL)
      {
         // Проверяем, что именно произошло: кончился файл
         // или это ошибка чтения
         if ( feof (mf) != 0)
         {  
            //Если файл закончился, выводим сообщение о завершении 
            //чтения и выходим из бесконечного цикла
            printf (“\nЧтение файла закончено\n”);
            break;
         }
         else
         { 
            //Если при чтении произошла ошибка, выводим сообщение 
            //об ошибке и выходим из бесконечного цикла
            printf (“\nОшибка чтения из файла\n”);
            break;
         }
      }
      //Если файл не закончился, и не было ошибки чтения 
      //выводим считанную строку  на экран
      printf (“     %s”,str);
   }

   // Закрываем файл
   printf (“Закрытие файла: ”);
   if ( fclose (mf) == EOF) printf (“ошибка\n”);
   else printf (“выполнено\n”);

   return 0;
} 