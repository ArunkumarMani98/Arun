#include <stdio.h>
#include<string.h>
int main(void)
{
	char str[100],st[100];
	int i,count=0,j=0;
	printf("\nEnter the charcter: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
	if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
	{
			count=1;
	}
	else
	{
		st[j]=str[i];
		j++;
	}
	}
		printf("\nThe string %s with removed vowel and reversed is...",str);
	for(i=j-1;i>=0;i--)
	{
		printf("%c",st[i]);
	}
	
	return 0;
}
 
