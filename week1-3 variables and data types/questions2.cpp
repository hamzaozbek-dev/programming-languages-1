#include <stdio.h>

int main()
{
	int var = 052;			//treated as an octal value, not a decimal value. Octal = Sekizlik sistem
	printf("%d\n", var);	//(2 * 8^0 + 5 * 8^1) = 42
	printf("%o\n", var);	//%o ile yazýlýr; %#o ile de yazýlabilir çýktý = 052 olur	çýktý sayýnýn kendisini verir
	printf("%#o\n", var);	//%d octal value çýktýsýný verir
	return 0;				//052 , 00052 , 00000052 hepsinde çýktýlar ayný bir 0dan sonrasý etkisiz eleman kabul edilir
}
