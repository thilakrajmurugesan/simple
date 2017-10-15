#include<stdio.h>
#include<conio.h>
int main()
{
	int l=0;
	int h=0;
	int c=0;
	printf("\nEnter l limit");
	scanf("%d",&l);
	printf("\nEnter u limit");
	scanf("%d",&h);
	for(int i=l;i<=h;i++)
	{
		if((i%2)==0)
		printf("\t%d",i);
	}
return 0;
}
