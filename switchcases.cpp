#include<stdio.h>
int main()
{
	int a,b,c=0;
	int choice;
	printf("enter the numbers");
	scanf("%d %d",&a,&b);
	printf("select the choice:1.add\n 2.subract\n 3.multiply\n 4.division\n");
	printf("enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
		printf("%d",c=a+b);
		break;
		case 2:
		c=a-b;
		break;
		case 3:
		c=a*b;
		break;
		case 4:
		c=a/b;
		break;
		default: 
		printf("nothing");
		break;
	}
	printf("%d",c);
		return 0;
}
