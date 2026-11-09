#include<stdio.h>
int main(){
/*	int a,b,c;
	printf("Enter three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c) printf("a=%d is the largest",a);
	else if(b>=a && b>=c) printf("b=%d is the largest",b);
	else printf("c=%d is the largest",c);
	return 0;											*/
	int a,b,c,max;
	printf("Enter three integers: ");
	scanf("%d %d %d",&a,&b,&c);
	max = a;
	if(b>max) max = b;
	if(c>max) max =c;
	printf("%d is the largest",max);
	return 0;
}
