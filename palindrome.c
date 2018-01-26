#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,j,count=0;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	i=0;
	j=strlen(a);
	while(a[i]!='\0')
	{
		if(a[i]==a[j-1]&&a[i]!='\0')
		{
		i++;
		j--;
		count++;
		}
		else
		{
			printf("\n%s is not a palindrome.",a);
			break;
		}
	}
	if(count==strlen(a))
	{
		printf("\n%s is the palindrome.",a);
	}
	return 0;
}
