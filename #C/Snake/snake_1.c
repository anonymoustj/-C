
 /*      __    _______ ___      ___    ________      _______       ________   _______
        /AA\  |FF_____|MMM\    /MMM|  /  ____  \    /  ____  \    /  ____  \ /3_3_3_3\
       /A/\A\ |FF|___ |MMM_\__/_MMM| |cc|    |cc|  |cc|    |cc|  |cc|    |cc|3/	    /3|
      /A/__\A\|FF____||MM| \__/ |MM| |cc|    |cc|  |cc|    |cc|  |cc|    |cc|   ___/3/
     /A/____\A\FF|    |MM|      |MM| |cc|____|cc|  |cc|____|cc|  |cc|____|cc|  |3_3_3\
    /A/      \A\F|    |MM|      |MM|  \________/____\________/____\________/_______\33\
                                      3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_3_33/
	*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

#define High 20//��ͼ�ĳߴ� 
#define Width 30
#define times 400

 typedef struct x_y{
 	int x;
 	int y;
 }f;
 f food,e1,e2;
 
//ʳ������� 
typedef struct stack{
	struct x_y snake;
	struct stack *next;
}n,*M;//�ߵ����꼰���б��棻
typedef struct st{
	M front;
	M rear;
}S;
S q;
int canvas[High][Width]={0};//��ͼ��ӦԪ�� 0�ո� 1���� 2ʳ�� 3Χǽ  4��ͷ 
int score=0; //���� 
char input;//����Ŀ��� 
void gotoxy(){
    HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X=0;
    pos.Y=0;
    SetConsoleCursorPosition(handle,pos);
} 

void Initqueue(){
	q.front=NULL;
	q.rear=NULL;
}
void Destroyq(){
	M p;
	while(q.front!=NULL){
		p=q.front;
		q.front=p->next;
		free(p);
	}
	q.rear=NULL;
}

//�����
int Enterqueue(){
	M p;
	p=(M)malloc(sizeof(n));
	if(p==NULL){
		return 0;
	}
	p->snake=e1;
	p->next=NULL;
	if(q.front==NULL){
		q.front=p;
		q.rear=p;
	}
	else{
		q.rear->next=p;
		q.rear=p;
	}
	return 1;
} 
//���ӣ�
int Popqueue(){
	M p;
	if(q.front==NULL){
		return 0;
	}
	p=q.front;
	q.front=p->next;
	if(q.front==NULL){
		q.rear=NULL;
	}
	e2=p->snake;
	free(p);
	return 1;
} 

void Clear(){
	gotoxy();
	int i=0,j=0;
	printf("����w,s,a,d�ֱ�Ϊ��������,����ո���ͣ\n");
	for(i=0;i<High;i++){
		for(j=0;j<Width;j++){
			if(canvas[i][j]==0){
				printf(" ");
			}
			if(canvas[i][j]==1){
				printf("+");
			}
			if(canvas[i][j]==2){
				printf("$");
			}
			if(canvas[i][j]==3){
				printf("#");
			}
			if(canvas[i][j]==4){
				printf("@");
			}
		}
		printf("\n");
	}
	printf("                �÷֣�%d\n",score);
}
//�����ʼ�����ߵĳ�ʼλ�ã� 
void Startup(){
	int i=0;
	Initqueue();
	food.x=0;
	food.y=0;
	e1.x=1;
	e1.y=1;
	e2.x=0;
	e2.y=0;
	Enterqueue();
	canvas[1][1]=4;
	for(i=0;i<Width;i++){
		canvas[0][i]=3;
		canvas[High-1][i]=3;
	}
	for(i=1;i<High-1;i++){
		canvas[i][0]=3;
		canvas[i][Width-1]=3;
	}
	Create_food();
}

int Update(){
	int j=0;
	if(input=='w'||'s'==input){
		if(input=='w'){
			j=-1;
		}
		else j=1;
		e1.x=e1.x+j;
		if(canvas[e1.x][e1.y]==2){
			score++;
			canvas[e1.x][e1.y]=4;
			canvas[e1.x-j][e1.y]=1;
			Create_food();
		}
		
		else if(canvas[e1.x][e1.y]==0){
			Popqueue();
			canvas[e1.x][e1.y]=4;
			canvas[e1.x-j][e1.y]=1;
			canvas[e2.x][e2.y]=0;
		}
		else if(canvas[e1.x][e1.y]==1){
			Popqueue();
			if(e1.x==e2.x&&e1.y==e2.y){
				canvas[e1.x][e1.y]=4;
			    canvas[e1.x-j][e1.y]=1;
			}
			else{
				return 0;
			}
			
		}
		else return 0;
	}
	else if(input=='a'||'d'==input){
		if(input=='a'){
			j=-1;
		}
		else j=1;
		e1.y=e1.y+j;
		if(canvas[e1.x][e1.y]==2){
			score++;
			canvas[e1.x][e1.y]=4;
			canvas[e1.x][e1.y-j]=1;
			Create_food();
		}
		
		else if(canvas[e1.x][e1.y]==0){
			Popqueue();
			canvas[e1.x][e1.y]=4;
			canvas[e1.x][e1.y-j]=1;
		    canvas[e2.x][e2.y]=0;
		}
		else if(canvas[e1.x][e1.y]==1){
			Popqueue();
			if(e1.x==e2.x&&e1.y==e2.y){
				canvas[e1.x][e1.y]=4;
			    canvas[e1.x][e1.y-j]=1;
			}
			else{
				return 0;
			}
			
		}
		else return 0;
	}
	Enterqueue(); 
	return 1;
}
//ʳ����£� 
int Create_food(){
	while(canvas[food.x][food.y]!=0){
		srand((unsigned)time(NULL));
        food.x=rand()%(High-3)+1;
		food.y=rand()%(Width-3)+1;
	}
	canvas[food.x][food.y]=2;
	
} 

int Conversion(){
	char preinput,preinput1;
	Startup();
	Clear();
	input=getch();
	while(Update()){
		Clear();
		if(!kbhit()){
			Sleep(times);
		}
		if(kbhit()){
			preinput=getch();
			if(preinput=='w'&&input=='s'&&score!=0||preinput=='s'&&input=='w'&&score!=0||preinput=='a'&&input=='d'&&score!=0||preinput=='d'&&input=='a'&&score!=0){
				Sleep(times);
				continue;
			}
			else if(preinput==input&&input!=' '){
				Sleep(100);
				continue;
			}
			else if(preinput=='w'||'s'==preinput||'a'==preinput||'d'==preinput){
				input=preinput;
				Sleep(times);
			}
			else if(preinput==' '){
				if(preinput==input){
					input=preinput1;
				}
				else{
					preinput1=input;
					input=preinput;
				}
				
			}
			else Sleep(times);
		}
	}
	printf("\007         Game over!\n        Your score:%d\n",score);
	return 0;
}
int main(){
	Conversion();
	Destroyq();
	return 0;
}
