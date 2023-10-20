#include<stdio.h>
int main()
{
	int number;
	printf("enter your no:");
	scanf("%d",&number);
	if(number>10)
	{
		printf("good morning");
	}
	else if(number<10)
	{
		printf("good afternoon");
		
	}
	else
	{
		printf("good noon");
	}
	return 0;
}