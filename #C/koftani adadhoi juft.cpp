#include <stdio.h>
#define  NUM 1000 //constant num dar dokhilash rakami hazor joigir ast 

int chochik (int a[], int b, int c); // protatii funkciyai chochik
int main (void)
{
	
	int num [NUM];// mikdori rakamho to 100 rakam
	int total;
	int searchkey;// rakam ki boyad vorid knem
	
	// dar injo har yak rakam az 0 to 99 ba 2 zarb zadameshavad
	for (int i=0; i<NUM; i++)
	{
		num[i]=2*i;
	}
	// dar ekran barovardani malumot  va vorid kardani adad
	printf ("Enter integer search key: \n");
	scanf ("%d", &searchkey);
	
	// total ba khud tamomi malumothoi funkciyai chochikro megirad 
	total = chochik (num, searchkey, NUM);
	
	// agar total ba -1 barobar naboshad chunin amalro ijro mekunad 
	if (total!=-1)
	{
		printf ("Found value in element\n");
	}
	// dar in holat in amalro ijro mekunem 
	else {
		printf ("Valu not found\n");
	}

}

int chochik (int a[], int b, int  c)
{
	for (int i=0; i<c; i++) // az 0 to c-amalro ijro mekunem
	{	
	//agar b barobari yagon adad az darun shud dar in holat malumotro ba khud sabt mekunem 
	// va agar nashud funkciya kor nakarda ba pesh harakat mekunad 
		if (b==a[i])
		{
			return a[i];
		}
	}
	//dar injo funcsiyaamon javobi -1 ro megirad
	return -1;
}
