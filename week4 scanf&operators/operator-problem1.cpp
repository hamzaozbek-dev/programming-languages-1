#include<stdio.h>
int main(){
	int a = 1;
	int b = 1;
	int c = ++a || b++;		// 2 || = TRUE , b++ is not evaluated because of short circuit.	c=1 a=2 b=1
	int d = b-- && --a;		// 1 && 1 = TRUE , d=1 a=1 b=0

	printf("%d %d %d %d", d, c, b, a);
	return 0;
}
