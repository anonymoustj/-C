#include <stdio.h>
#define SPASE ' '
int main (void)
{
	char ch;
	ch = getchar();
	
	while ( ch != '\n') // Usloviya  memonem agar yagonchi nanavisonda ENTER pakhsh kunem while kor namekunad 
	{
	if (ch == SPASE) // dar holate ki yagonchi nananvistem ammo SPASE ro pakhsh karda kor kadem dar in hola yagon chiz paydo nameshavad
	putchar (ch);
	
	else 
	putchar (ch+1);// dar in jo har yak harfhoro ba nazar girifta onhoro ba 1 + jam mekunad masalan (A=65+1=66(B))
	ch=getchar ();// in baroi har davr har yak harfro ba 1 jam mekunad 
	}
	putchar (ch);
	return 0 ;
}
