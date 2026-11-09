#include<stdio.h>
int main(){
	int x;
	printf("Bir sayi giriniz: ");
	scanf("%d",&x);
	if(x==3) printf("%d is equal to 3\n",x);
	else if(x<3) printf("%d is lesser to 3\n",x);
	else printf("%d is greater than 3",x);
	return 0;
}
