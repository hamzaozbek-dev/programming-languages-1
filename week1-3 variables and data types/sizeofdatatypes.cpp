#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
int main(){
	printf("size of char\t\t : %d bytes",sizeof(char));
	printf("\nsize of short int\t : %d",sizeof(short int));
	printf("\nsize of int\t\t : %d",sizeof(int));
	printf("\nsize of long long\t : %d",sizeof(long long));
	printf("\nsize of float\t\t : %d",sizeof(float));
	printf("\nsize of double\t\t : %d",sizeof(double));
	printf("\nsize of long double\t : %d",sizeof(long double));
	
	int var1 = INT_MIN;														//by default, int = signed int
	int var2 = INT_MAX;
	printf("\n\nrange of signed integer is from %d to %d", var1, var2);
	int var3 = 0;															//minimum value is fixed for all systems and that is zero
	int var4 = UINT_MAX;													//for short: shrt and ushrt
	printf("\nrange of unsigned integer is from %u to %u", var3, var4);		//for long= %ld , unsigned long= %lu ; for long long= %lld , unsigned long long= %llu
	return 0;
}
