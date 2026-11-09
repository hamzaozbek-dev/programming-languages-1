#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the triangle's all three sides' lengths: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a){
		if(a==b && b==c) printf("equilateral triangle");
		else if(a==b || b==c || a==c) printf("isosceles triangle");
		else printf("scalene triangle");
	}
	else printf("it is not a triangle");
	return 0;
}
