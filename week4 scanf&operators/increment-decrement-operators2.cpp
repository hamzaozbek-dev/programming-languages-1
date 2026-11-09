#include<stdio.h>
int main(){
	int a=4, b=3; 
	printf("%d", a+++b); // a++ + b, önce iþlemde a = 4 kullanýlýr, sonra a=5 olur. 4 + 3 = 7	a++: post increment
	int c=4, d=3;
	printf("\n%d", ++c+d);	// önce c=c+1=5 olur, sonra iþlemde kullanýlýr. 5 + 3 = 8	++c: pre increment
	int e=4, f=3;
	printf("\n%d", e + ++f);	// 4 + 4 = 8
	int g=4, h=3;
/*	printf("\n%d", g+++++h);	// ERROR, kod (g++)++ + h çalýþtýrmaya çalýþýr ama increment operator sadece lvalueya tanýmlanabilirken a++ rvaluedur.	*/
	printf("\n%d", g++ + ++h);	// 4 + 4 = 8, then g = 5
	return 0;
}
