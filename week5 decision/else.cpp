#include<stdio.h>
int main(){
	int var;
	printf("Bir sayi giriniz: ");
	scanf("%d",&var);
	if(var>3){			//do not use ; just before starting a block
		printf("%d value is greater than 3",var);
	}
	else{
		printf("%d value is less than or equal to 3",var);
	}
	return 0;
}
