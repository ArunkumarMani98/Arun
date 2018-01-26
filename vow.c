#include <stdio.h>
 
int main(void)
{
	char str[100];
	int i,count=0;
	printf("\nEnter the charcter: ");
	scanf("%s",&str);
	for(i=0;str[i]!='\0';i++)
	{
	if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
	{
			count=1;
	}
	}
	if(count==1)
	{
		printf("%s has alphabets.",str);
	}
	else
	{
		printf("%s has no alphabets.",str);
	}
	return 0;
}
 
