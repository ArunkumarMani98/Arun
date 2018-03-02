#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,s=0,k,e=0,j,c;
char a[100],b[100];
clrscr();
printf("\nEnter the string : ");
scanf("%s",&a);
printf("\nEnter the substring : ");
scanf("%s",&b);
k=strlen(b);
c=k;
for(i=0;a[i]!='\0';i++)
{
for(j=i;j<k;j++)
{
if(a[j]==b[s])
{
s++;
}
}
k=k+1;
if(s==c)
{
e=1;
}
s=0;
}
if(e==0)
{
printf("\nNO!!!");
}
else if(e==1)
{
printf("\nYES!!!");
}
getch();
}
