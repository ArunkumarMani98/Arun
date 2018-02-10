#include<stdio.h>
int obstacle(int);
void main()
{
	int km,i,s,o;
	char start[100],end[100];
	printf("\nEnter the place where youn start : ");
	scanf("%s",&start);
	printf("\nEnter the destionation place : ");
	scanf("%s",&end);
	printf("\nEnter the number of kms between %s and %s : ",start,end);
	scanf("%d",&km);
	printf("\nEnter the speed you are driving : ");
	scanf("%d",&s);
	printf("\nYou started driving...");
	for(i=1;i<=km;i++)
	{
		printf("\nYou have crossed %d kilometers...",i);
		if(i==km)
		{
			printf("\nYou have reached the Destination (%s).",end);
		}
		printf("\nIs there any obstacle(0-1) : ");
		scanf("%d",&o);
		switch(o)
		{
			case 0:obstacle();
					break;
			case 1:printf("\nNo obstacle found you can continue driving...");
					break;
			default:break;
		}
	}
}
int obstacle()
{
	int obs;
	printf("\nEnter the obstacle:\n1.person\n2.speed breaker\n3.vechicle ");
	scanf("%d",&obs);
	switch(obs)
	{
		case 1:pslow();
		break;
		case 2:sslow();
		break;
		case 3:vslow();
		break;
		default:break;
	}
}
int pslow()
{
	timep=1;
}
int sslow()
{
	
}
int vslow()
{
}
