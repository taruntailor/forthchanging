#include<stdio.h>
int main()
{
	int sp,cp,amt;
	printf("enter cost price:");
	scanf("%d",&cp);
	printf("enter selling price:");
	scanf("%d",&sp);
	if(sp>cp)
	{
		printf("it's profit\n");
		amt=sp-cp;
		printf("%d",amt);
	}
	else if(sp<cp)
	{
		printf("it's loss\n");
		amt=cp-sp;
		printf("%d",amt);
	}
	return 0;
}