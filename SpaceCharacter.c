#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,j,n,k=0,t[250],ascii,q,max,e;
clrscr();
printf("\nEnter the string : ");
gets(a);
for(i=0;i<250;i++)
{
t[i]=0;
}
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' '||a[i+1]=='\0')
{
for(j=k;j<=i;j++)
{
ascii=(int)a[j];
t[ascii]+=1;
}
max=1;
for(q=0;q<250;q++)
{
if(t[q]!=0)
{
if(max<t[q])
{
max=t[q];
e=q;
}
}
}
printf("\t%c",e);
k=i+1;
for(q=0;q<250;q++)
{
t[q]=0;
}
}
}
getch();
}
