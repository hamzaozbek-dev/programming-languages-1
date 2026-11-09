#include<stdio.h>
int main(){
	int a;
	a = (3, 4, 8);
	printf("%d",a);		// Output= 8 (the rightmost operand)
	
	int var = (printf("\n%s\n","HELLO!"), 5);		// Ama diðerlerini de uygular, sonra reddeder.
	printf("%d",var);								// Output: HELLO! \n 5
	
	int b;				// Comma operator is having least precedence among all the operators available in C language.
	b = 3, 4, 8;		// (a = 3), 4, 8;
	printf("\n%d",b);	// Output= 3
	
/*	int c = 3, 4, 8;	// int c = 3, int 4, int 8;
	printf("\n%d",c);	// ERROR	*/
	
	int c = (3, 4, 8);	// Bracket( () ) has the highest precedence than any other operator.
	printf("\n%d",c);	// Output= 8
	
	return 0;
}
