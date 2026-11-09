#include<stdio.h>

int main()
{
	int sum, i;
	for(sum = 0, i = 2; i <= 20; i += 2)
	{
		sum = sum + i;
	}
	printf("The sum of even numbers (2-20): %d", sum);
	
	return 0;
}
