#include<stdio.h>
int main(){
	int a = 5;
	if (!(a==6)) printf("Hello World!");	// a==6 is false, !(a==6) is true
	
	int b = 5, c = 3;
	int incr;
	incr = (b < c) && (c++);	// b < c is false, herhangi bir durum false olduðunda ondan sonraki diðer durumlar okunmaz (SHORT CIRCUIT)
	printf("\n%d", incr);		// || (or operatörü)'nde ise herhangi bir durum true olduðunda ondan sonraki diðer durumlar okunmaz
	printf("\n%d", c);
	
	int d = 5, e = 3;
	int incrr;
	incrr = (d > e) && (e++);	// 0 dýþýndaki deðerler true'dur. (d>e)=true , e++ => 3 also true	incrr=1(true)
	printf("\n%d", incrr);
	printf("\n%d", e);
	return 0;
}
