#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter num1:");
	scanf("%d",&num1);
	printf("enter num2:");
	printf("%d",&num2);
	if(num1>num2)
	{
		printf("num is maximum");
		printf("%d",num1);
	}
	else if (num1<num2)
	{
		printf("num is minimum");
		printf("%d",num2);
	}
	else
	{
		printf("num is equal");
	}
	return 0;
}