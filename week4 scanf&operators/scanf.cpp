#include<stdio.h>

int main(){
	int var, var2;
	int errorsum = var + var2;
	scanf("%d", &var);			//scanf using standart input - Keyboard
	scanf("%d", &var2);			// & is also called as "address-of" operator. &var = address of var
	int sum = var + var2;		//sum'ý scanladýktan sonra tanýmlamak lazým
	printf("%d + %d = %d , not %d", var, var2, sum, errorsum);
	return 0;
}
