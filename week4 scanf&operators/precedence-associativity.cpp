#include<stdio.h>
int main(){
	int a=10, b=20, c=30, d=40;
	if(a <= b == d > c) printf("TRUE");		// PRECEDENCE: relational(<,>,<=,>=) > equality(==,!=)
	else printf("FALSE");					// so (a <= b) == (d > c)	ASSOCIATIVITY is left to right.
	return 0;								// so TRUE == TRUE is true, so Output: TRUE
}
