#include<stdio.h>
int main()
{
	int a,b,c;
	float f;
	a=7;
	b=2;
	c=a/b;//division of two integers yields an integer value
	f=a/b;//even if you assing to a floating point variable
	printf("c=%d\n",c);
	printf("f=%f",f);
	return 0;
}
