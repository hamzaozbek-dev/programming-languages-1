#include<stdio.h>

int main()
{
	int i;
	for(i = 3; i > 0; i--)	// (initialization; condition; increment/decrement)		There must be two ";"
	{
		printf("i:%d\n", i);
	}
	
	int j = 3;
	for(;j>0;)
	{
		printf("\nj:%d", j);
		j--;
	}
	
/*	int k = 3;				// Infinite loop
	for(;;)
	{
		printf("%d", k);
	}						*/
	
	int l;
	for(l = 3; l > 0; l--);
	printf("\n\nafter the loop, the value of l is : %d", l);
	
	return 0;
}
