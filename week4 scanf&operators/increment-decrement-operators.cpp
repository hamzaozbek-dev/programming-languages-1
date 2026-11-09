#include<stdio.h>
int main(){
	int a = 5;
	int x = a++;	//first x=a , then a=a+1
	int b = 5;
	int y = ++b;	//first b=b+1 , then y = b(new b that equals to b+1)
	printf("%d %d",x,y);
	return 0;
}
