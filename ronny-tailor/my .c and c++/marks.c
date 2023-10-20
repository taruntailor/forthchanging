#include<stdio.h>
int main()
{
	int marks;
	char grade;
	
	printf("enter your marks:");
	scanf("%d",&marks);
	if(marks>90)
	{
		printf("a grade");
	}
		else if(marks>80)
	{
		printf("b grade");
	}
		else if(marks>70)
	{
		printf("c grade");
	}
		else if(marks>60)
	{
		printf("d grade");
	}
		else if(marks>50)
	{
		printf("e grade");
	}
	else
	{
		printf("fail");
	}
	return 0;
}