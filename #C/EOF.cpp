#include <stdio.h>

int main ()
{
	
	int ch=1;
	
	printf ("Salom aleykum!\nAz 1 to 100 yak rakam gired va man\nkushish mekunam ki onro yobam:\nMekhohed bozi kardan ?\ny? n?\n");
		
	
	while (getchar() =='y'){
	printf ("Rakami shumo %d?\n", ch);
	
	while ( getchar() != 'y'){
	
	printf ("Shoyad %d boshad?\n", ++ch);
	while (getchar() !='\n')
	continue;
}
}
printf ("Tashakur. To bozdid.");
	return 0;
	
}
