#include<stdio.h>
int main(){
	char a;
	printf("Enter a character: ");
	scanf(" %c", &a);
	if((a>='A' && a<='Z') || (a>='a' && a<='z')) printf("letter");
	else if(a>='0' && a<='9') printf("digit");
	else printf("special character");
	return 0;
}
