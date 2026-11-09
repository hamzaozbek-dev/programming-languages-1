#include <stdio.h>
int main()
{
	int var1 = 10;
	int var2 = var1;
	printf("%d\n",var2);
	
	int var3, var4 = 4;
	printf("%d\n", var3);
	printf("%d\n", var4);
	
	int var5 = 20, var6 = 25;
	printf("%d\n", var5);
	printf("%d\n", var6);
	
	int var7, var8, var9;
	var7 = var8 = var9 = 30;
	printf("%d\n", var7);
	printf("%d\n", var8);
	printf("%d", var9);
	return 0;	
}
