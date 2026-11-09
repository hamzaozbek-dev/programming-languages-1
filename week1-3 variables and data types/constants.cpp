#include <stdio.h>
#define PI 3.14159
#define add(x, y) x+y
#define greater(a, b) if(a > b) \
		printf("%d is greater than %d",a,b);\
			else\
	printf("%d is lesser than %d",a,b);

const int var2 = 20;

int main(){
	printf("%.5f", PI);
	printf("\n%d\n", add(4,3));
	greater(5,6);
	printf("\n%d\n", 5 * add(4,3));		//cevap 5*7=35 DEÐÝL, 5*4+3=23 DOÐRU, önce MACRO(add(x,y)) geniþletilir(4+3) sonra deðerlendirilir(5*4+3)
	printf("Date: %s Time: %s",__DATE__,__TIME__);
	
	const int var = 10;
	printf("\n\n%d %d", var, var2);
	return 0;
}
