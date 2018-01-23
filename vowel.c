#include <stdio.h>
 
int main(void)
{
	char str;
	printf("\nEnter the charcter: ");
	scanf("%c",&str);
	if((str=='a')||(str=='e')||(str=='i')||(str=='o')||(str=='u')||(str=='A')||(str=='E')||(str=='I')||(str=='O')||(str=='U'))
	{
			printf("%c is a Vowel",str);
	}
	else
	{
		printf("%c is a consonant",str);
	}
	return 0;
}
 
