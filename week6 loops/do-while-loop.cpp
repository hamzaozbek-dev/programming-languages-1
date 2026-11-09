#include<stdio.h>

int main()
{
	int i;
	printf("Enter an integer value (for exit enter -1): ");
	scanf("%d", &i);
	do
	{
		scanf("%d", &i);
	} while(i != -1);
	printf("i = -1");
	
	return 0;
}
