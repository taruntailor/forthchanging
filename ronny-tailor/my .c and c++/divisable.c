#include<stdio.h>
int main()
{
	int number;
	printf("enter your no:");
	scanf("%d",&number);
	if(number%11==0)
	{
		printf("no is divisable");
	}
	else
	{
		printf("no is not divisable");
	}
	return 0;
}