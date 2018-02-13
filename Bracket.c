#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b=')',c='(';
int i,n,s=1;
printf("\nEnter the string : ");
gets(a);
n=strlen(a);
if(a[0]==b&&a[n-1]==c)
{
printf("\n%s is invalid.",a);
}
else
{
for(i=0;a[i]!='\0';i++)
{
if(a[i]==c)
{
	s=s+1;
}
else if(a[i]==b)
{
	s=s-1;
}
if(s<=0)
{
	printf("\n%s is Invalid.",a);
	break;
}
}
}
if(s==1)
{
	printf("\n%s is valid.",a);
}
else if(s>1)
{
	printf("\n%s is invalid.",a);
}
return 0;
}
