#include <stdio.h>
#include <math.h>
int main(void) 
{
	int x1,x2,x3,y1,y2,y3,a,b,c,a1,b1,c1,a2,b2,c2,a3,b3,c3;
	double ans1,ans2,ans3;
	printf("\nEnter the first point (x1,y1) : ");
	scanf("%d\t%d",&x1,&y1);
	printf("\nEnter the first point (x2,y2) : ");
	scanf("%d\t%d",&x2,&y2);
	printf("\nEnter the first point (x3,y3) : ");
	scanf("%d\t%d",&x3,&y3);
	a=x2-x1;
	b=x3-x2;
	c=x3-x1;
	a1=y2-y1;
	b1=y3-y2;
	c1=y3-y1;
	a2=a*a;
	b2=b*b;
	c2=c*c;
	a3=a1*a1;
	b3=b1*b1;
	c3=c1*c1;
	ans1=sqrt(a2+a3);
	ans2=sqrt(b2+b3);
	ans3=sqrt(c2+c3);
	if(ans3==(ans1+ans2))
	{
		printf("\nThe three points lie on the same line .");
	}
	else
	{
		printf("\nThe three points does not lie on the same line.");
	}
	return 0;
}
