#include <stdio.h>
 
int main(void)
{
	int n,m,o,tot;
	printf("\nEnter the three numbers : ");
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&o);
	tot=(n*m)%o;
	printf("\nThe result is %d.",tot);
return 0;
}
