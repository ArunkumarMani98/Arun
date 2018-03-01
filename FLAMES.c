#include<stdio.h>
#include<conio.h>
void main()
{
char a[10]="FLAMES",b[100],s2[100],s1[100];
int i,m=6,n=0,s,k,j=0,temp[251],temp1[251],ascii,temp2[250];
clrscr();
printf("\nEnter your name : ");
scanf("%s",&s1);
printf("\nEnter your partner name : ");
scanf("%s",&s2);
for(i=0;s1[i]!='\0';i++)
{
if(s1[i]<=92)
{
s1[i]+=32;
}
}
for(i=0;s2[i]!='\0';i++)
{
if(s2[i]<=92)
{
s2[i]+=32;
}
}
for(i=0;i<=250;i++)
{
temp[i]=0;
temp1[i]=0;
temp2[i]=0;
}
for(i=0;s1[i]!='\0';i++)
{
ascii=(int)s1[i];
temp[ascii]+=1;
}
for(i=0;s2[i]!='\0';i++)
{
ascii=(int)s2[i];
temp1[ascii]+=1;
}
for(i=0;i<=250;i++)
{
if(temp[i]==temp1[i])
{
temp[i]=0;
temp1[i]=0;
}
else if(temp[i]>temp1[i])
{
temp2[i]=temp[i]-temp1[i];
}
else if(temp1[i]>temp[i])
{
temp2[i]=temp1[i]-temp[i];
}
}
for(i=0;i<=250;i++)
{
if(temp2[i]!='\0')
{
n+=temp2[i];
}
}
for(k=0;k<5;k++)
{
s=n%m;
for(i=s;a[i]!='\0';i++)
{
b[j]=a[i];
j++;
}
for(i=0;i<s-1;i++)
{
b[j]=a[i];
j++;
}
for(i=0;b[i]!='\0';i++)
{
a[i]=b[i];
}
a[m-1]='\0';
m=m-1;
j=0;
}
if(a[0]=='F')
{
printf("\n%s and %s are FRIENDS!!!",s1,s2);
}
else if(a[0]=='L')
{
printf("\m%s and %s are LOVERS!!!",s1,s2);
}
else if(a[0]=='A')
{
printf("\n%s and %s are AFFECTIONATE with each other!!!",s1,s2);
}
else if(a[0]=='M')
{
printf("\n%s and %s are MARRIED COUPLES!!!",s1,s2);
}
else if(a[0]=='E')
{
printf("\n%s and %s are ENEMIES!!!",s1,s2);
}
else if(a[0]=='S')
{
printf("\n%s and %s are SIBLINGS!!!",s1,s2);
}
getch();
}
