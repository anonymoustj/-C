#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <string.h>
#include <time.h>
void main(void)
{
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "");
int i, j, x, y, x1, y1, k=0, l, m, r, t;
char s[2], c[31]={"0123456789"};
randomize();
int Ax[63]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,1 50,160,170,180,190,200,210,220,230,240,250,260,270 ,280,290,300,310,320,330,340,350,360,370,380,390,4 00,410,420,430,440,450,460,470,480,490,500,510,520 ,530,540,550,560,570,580,590,600,610,620,630};
int Ay[40]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,1 50,160,170,180,190,200,210,220,230,240,250,260,270 ,280,290,300,310,320,330,340,350,360,370,380,390,4 00};


rectangle(13,13,627,397);
s[0]=c[k];
s[1]='\0';
outtextxy(290,450,"Score: ");
outtextxy(347,450,s);
l=random(62);
m=random(39);
if (l==0) l++;
if (l==62) l--;
if (m==0) m++;
if (m==39) m--;
x1=Ax[l];
y1=Ay[m];


i=31;
j=19;
circle(Ax[i],Ay[j],5);
putpixel(Ax[i]-2,Ay[j]-2,15);
putpixel(Ax[i]+2,Ay[j]-2,15);
putpixel(Ax[i],Ay[j],15);
line(Ax[i]-1,Ay[j]+2,Ax[i]+1,Ay[j]+2);

int key;
do
{
setcolor(7);
circle(x1,y1,5);
setfillstyle(1,7);
floodfill(x1,y1,7);
r=i;
t=j;
if(kbhit()) key=getch();
if(key==80) j++;
if(key==72) j--;
if(key==77) i++;
if(key==75) i--;
delay(150);


setcolor(0);
circle(Ax[r],Ay[t],5);
putpixel(Ax[r]-2,Ay[t]-2,0);
putpixel(Ax[r]+2,Ay[t]-2,0);
putpixel(Ax[r],Ay[t],0);
line(Ax[r]-1,Ay[t]+2,Ax[r]+1,Ay[t]+2);

setcolor(7);
circle(Ax[i],Ay[j],5);
putpixel(Ax[i]-2,Ay[j]-2,15);
putpixel(Ax[i]+2,Ay[j]-2,15);
putpixel(Ax[i],Ay[j],15);
line(Ax[i]-1,Ay[j]+2,Ax[i]+1,Ay[j]+2);

if (getpixel(Ax[i]+3,Ay[j])==15 | getpixel(Ax[i]-3,Ay[j])==15 | getpixel(Ax[i],Ay[j]+3)==15 | getpixel(Ax[i],Ay[j]-3)==15)
{
outtextxy(240,200,"Snake left for border");
getch();
closegraph();
}

if (Ax[i]==x1 && Ay[j]==y1)
{

circle(x1,y1,5);
setfillstyle(1,0);
floodfill(x1,y1,0);

l=random(62);
m=random(39);
if (l==0 ) l++;
if (l==62) l--;
if (m==0 ) m++;
if (m==39) m--;
x1=Ax[l];
y1=Ay[m];

circle(x1,y1,5);
setfillstyle(1,7);
floodfill(x1,y1,7);

setcolor(0);
s[0]=c[k++];
s[1]='\0';
outtextxy(347,450,s);

setcolor(7);
s[0]=c[k];
s[1]='\0';
outtextxy(347,450,s);
}


}
while(key!=27);
getch();
closegraph();
}
