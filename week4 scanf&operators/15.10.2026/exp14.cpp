#include <stdio.h>
int main(void)
{
	int x = 5;
	int a, b;
	a = ++x;//first x value is increased by 1 then in the expression iss used the new value
	printf("a = %d, x = %d\n", a, x);
	x = 5;
	b = x++;
	printf("b = %d, x = %d\n", b, x);
	return 0;
}
