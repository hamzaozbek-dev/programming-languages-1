#include<stdio.h>
int main(){
	int a;
	printf("Enter an integer: ");
	scanf("%d", &a);
	if(a % 2 == 0) printf("even number");
	else printf("odd number");
	return 0;
}
