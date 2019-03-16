//Description
//Double Eleven's Day is coming. Wang Xiaoming want to send some message to his girl friend. However, all his roommates are the SINGLE DOG. If they found Xiaoming was feeding dog food to them, they would kill HIM!!!
//At last, Xiaoming has a simple idea. He relpaces some characters of his message in a special pattern, and only his girl knows the pattern. So, Xiaoming's roommates can not know what the message is.
//Now, you must help Xiaoming's roommates using the pattern you known.
//
//Input
//The first is the total number N of characters will be replaced.
//Then the next N lines is the pattern which contains two the characters. The first is the character before repalcing, and the second is the character after replacing. And all the characters are alphabets. ('a' ~ 'z' and 'A' ~ 'Z')
//At the last line is the message after replacing consists of alphabets, whose length is less than 1000.
//
//Output
//print the message before replacing.
//
//Sample Input
//6 
//o y
//y i
//i v
//v e
//e u
//u o
//vlyeuiyo
//Sample Output
//iloveyou
//Explanation
//From the sample input, we have:
//
//  o -> y
//  y -> i
//  i -> v
//  v -> e
//  e -> u
//  u -> o
//And
//
//  vlyeuiyo
//  ^^^^^^^^
//  ||||||||
//  iloveyou

#include<stdio.h>

int main()
{
int n=0,i=0,j=0,m=0;
char a[101],b[101],t[1000];

    for(i=0;i<1000;i++) 
    {
    t[i]='0';
    }
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%c",&a[i]);
       
        while(a[i]=='\n'||a[i]==' ')
        {
           scanf("%c",&a[i]);
        }
   
    scanf("%c",&b[i]);
    
        while(b[i]=='\n'||b[i]==' ') 
        scanf("%c",&b[i]);
        }
    
    scanf("%s",t);
        for(i=0;i<1000;i++)
        {
        for(j=0;j<n;j++)
        {
        if(b[j]==t[i])
        {
        t[i]=a[j];
        break;
        }
    }
}
for(i=999;i>=0;i--)
{
    if(t[i]!='0')
    {
    m=i;
    break;
    }
}
for(i=0;i<m;i++)
{
    printf("%c",t[i]);
}
printf("\n");
return 0;
}
