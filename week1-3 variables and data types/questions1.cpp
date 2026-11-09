#include <stdio.h>
int main(){
	printf("%d\n", printf("%s", "Hello World!"));		//önce içteki fonksiyon çalýþýr ekrana Hello World! yazar, karakter sayýsýný int olarak geri döndürür
														//sonra dýþtaki fonksiyon printf("%d", 12); olarak çalýþýr ve 12 yazar.
	printf("%10s", "Hello");
	
	signed i = -10;		//signed i = signed int i
	unsigned j = 20;	//unsigned j = unsigned int j
	printf("\n%d %d", i, j);
	return 0;										
}
