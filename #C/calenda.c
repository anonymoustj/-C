#include <stdio.h>
int main ()
{
	int y,m,d,w;
	printf ("Sol	Moh 	Ruz");
	scanf ("%d %d %d",&y,&m,&d);
	if(m==1||m==2)
{
	y=y-1;
	m=m+12;
}
w=((d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7+1)%7;
if (w==0)
w=7;

switch (w)
{
	case 1:
		printf ("DUSHANBE");
		break;
	case 2:
		printf ("SESHANBE");
		break;
	case 3:
		printf ("CHORSHANBE");
		break;
	case 4:
		printf ("PANJSHANBE");
		break;
	case 5:
		printf ("JUMMA");
		break;
	case 6:
		printf ("SHANBE");
		break;
	default:
		printf ("YAKSHANBE");
		break;
}
return 0; 
}
