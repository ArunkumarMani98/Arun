#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b=')',c='(';
int i,n,d=0,e=0;
clrscr();
printf("\nEnter the string : ");
gets(a);
n=strlen(a);
if(a[0]==b&&a[n-1]=='(')
{
printf("\n%s is invalid.",a);
}
else
{
for(i=0;a[i]!='\0';i++)
{
if(a[i]==c)
{
d=d+1;
}
else if(a[i]==b)
{
e=e+1;
}
}
if(d==e)
{
printf("\n%s is valid.",a);
}
else
{
printf("\n%s is invalid.",a);
}
}
getch();
}

