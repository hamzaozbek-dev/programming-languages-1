#include<stdio.h>
int main(){
	//Q.2
/*	int var;
	printf("Enter an integer: ");
	scanf("%d",&var);
	if(var % 2 == 0) printf("%d is an even number",var);
	else printf("%d is an odd number",var);	*/
	
	//Q.3
/*	char var2;
	printf("Enter a character: ");
	scanf("%c",&var2);
	if(var2 >='A' && var2 <='Z') var2 = var2 + 32;	// 'A' = 65 , 'a' = 97 ;  97 - 65 = 32
	switch(var2){
		case 'a':
			printf("vowel");
			break;
		case 'e':
			printf("vowel");
			break;
		case 'i':
			printf("vowel");
			break;
		case 'o':
			printf("vowel");
			break;
		case 'u':
			printf("vowel");
			break;
		default:
			printf("consonant");
			break;
	}	*/
	
	//Q.6
/*	int var3, var4, var5;
	printf("Enter three different integers:\n");
	scanf("%d%d%d",&var3,&var4,&var5);
	if(var3>=var4 && var3>=var5) printf("%d is the greatest",var3);
	else if(var4>=var3 && var4>=var5) printf("%d is the greatest",var4);
	else printf("%d is the greatest",var5);	*/
	
	//Q.7
	char var6;
	printf("Enter an uppercase or lowercase character: ");
	scanf("%c",&var6);
	if('a'<=var6 && var6<='z') printf("lowercase");
	else printf("uppercase");
	
	
	
	
	return 0;
}
