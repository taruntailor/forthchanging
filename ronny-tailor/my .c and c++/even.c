#include<stdio.h>
int main()
{
	int number;
	printf("enter your no:");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("even no");
	}
	else
	{
		printf("odd no");
	}
	return 0;
}