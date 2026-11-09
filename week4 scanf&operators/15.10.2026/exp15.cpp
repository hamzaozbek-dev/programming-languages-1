#include <stdio.h>
int main(void)
{
	int a,b,c;
	a=21;
	b=18;
	c=(a<b);//the value of c ie 0 because 21 is not less than 18
	printf("c=%d\n",c);
	c=(a>b);//the value of c ie 1 because 21 is greater than 18
	printf("c=%d\n",c);
	c=(a==b);//the value of c ie 0 because 21 is not equal to 18
	printf("c=%d\n",c);
	return 0;
}
