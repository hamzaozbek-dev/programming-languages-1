#include<stdio.h>

int main()
{
	int n, i, f = 1;
	printf("Faktoriyelini almak istediginiz sayiyi girin: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) f *= i;
	printf("%d! = %d", n, f);
	
	return 0;
}
