#include <stdio.h>
int main(void)
{
	int a;
	printf("An interger value:");
	//scanf("%d",a);//incorrect
	scanf("%d",&a);//correct
	printf("The number entered by user is %d\n",a);
	return 1;
}
