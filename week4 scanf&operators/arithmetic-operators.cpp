#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d",&a);
	printf("\nEnter the second number: ");
	scanf("%d",&b);
	
	printf("\na / b = %d", a/b);
	printf("\na %% b = %d", a%b);
	return 0;
}
