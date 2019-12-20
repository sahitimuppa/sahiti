#include<stdio.h>
int main()
{
	int height;
	printf("enter the height",height);
	scanf("%d",&height);
	if(height<150)
	printf("dwarf");

	else if(height>150&&height<165)
		printf("average height");
	    else if(height>165&&height<190)
		printf("tall");
	
	else if(height>190)
	printf("abnormal height");
	return 0;
}

