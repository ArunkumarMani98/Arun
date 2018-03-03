#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],b[100]="Answer";
int i,n;
clrscr();
printf("\nEnter the string : ");
scanf("%s",&a);
printf("\nAfer adding 'Answer' to EOS is : ");
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
if(a[i+1]=='\0')
{
printf("%c",a[i]);
printf("%s",b);
break;
}
printf("%c",a[i]);
}
getch();
}
