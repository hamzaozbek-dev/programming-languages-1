#include<stdio.h>
int main(){
		char op;
		int a, b;
		printf("Enter an operation(+ - * /): ");
		scanf(" %c", &op);
		printf("Enter two integers: ");
		scanf("%d %d", &a, &b);
		switch(op){
			case '+': printf("%d", a+b);
				break;
			case '-': printf("%d", a-b);
				break;
			case '*': printf("%d", a*b);
				break;
			case '/': 
				if(b == 0) printf("undefined");
				else printf("%d", a/b);
				break;
			default: printf("You entered wrong input");
				break;
		}
		return 0;		
}
