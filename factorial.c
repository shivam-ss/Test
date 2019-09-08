#include<stdio.h>
int main()
{
	int a; int b;
	printf("enter the num whose factorial is required :");
	scanf("%d", &a);
	int i;
	int f=1;
	for(i=1;i<=a;i++)
	{
	 f=f*i;
	 
	}
	printf("factorial is %d",f);
	
	return 0;
}
