#include <stdio.h>
int main(){
	int x = 0;
	if(x++){
		printf("it is NOT true");		//every value is true except 0
	}
	printf("\nx=%d\n",x);
	
	
	int y = 0;
	if(++y){
		printf("it is true");
	}
	printf("\nx=%d\n",y);
	
	
	int z = 0;
	if(z=z+5){
		printf("it is true");
	}
	printf("\nx=%d",z);
	return 0;
}
