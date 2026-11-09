#include<stdio.h>
int main()
{
	char result;						// conditional operator is the only "ternary operator"(üçlü operatör) in C
	int mark;
	printf("enter the mark: ");
	scanf("%d", &mark);
	
	result = (mark > 50) ? 'A' : 'F';	// ? is like if and : is like else
	
	printf("result: %c", result);
	
	
	
	int a;
	a = 0 ? 2 : 1;		// Output= 1
	printf("\n%d",a);
	
	
	
	int var = 75;
	int var2 = 56;
	int num;

	num = sizeof(var) ? (var2 > 23 ? ((var == 75) ? 'A' : 0) : 0) : 0;	// Result= 'A', so output is 65

	printf("%d", num);
	
	return 0;
}
