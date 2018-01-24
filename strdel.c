#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100],new[100];
	int i,k;
	printf("\nEnter the character : ");
	scanf("%s",&a);
	printf("\nEnter the number upto the string displayed: ");
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		new[i]=a[i];
	}
	printf("\nThe new character is %s ",new);
	return 0;
}
