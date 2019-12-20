#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("a is greater");
	{
		if (b>c&&b>a)
		printf("b is greater");
		else
		printf("c is greater");
	}
	return 0;
}
