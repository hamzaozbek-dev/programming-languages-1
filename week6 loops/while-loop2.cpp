#include<stdio.h>

int main()
{
	int sum = 0, i = 2;
	while(i <= 20)
	{
		sum = sum + i;
		i += 2; 	// i = i + 2;
	}
	printf("The sum of even numbers (2-20): %d", sum);
	
	return 0;
}
