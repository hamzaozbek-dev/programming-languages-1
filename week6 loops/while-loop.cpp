#include<stdio.h>

int main()
{
	int i = 3;
	while(i >= 0)
	{
		printf("%d\n", i);
		i--;
	}
	printf("after the loop, the value of i is : %d", i);
	
	int j;
	printf("\n\nEnter an integer value (for exit enter -1): ");
	scanf("%d", &j);
	while(j != -1)
	{
		scanf("%d", &j);
	}
	printf("j = -1");
	
	return 0;
}
