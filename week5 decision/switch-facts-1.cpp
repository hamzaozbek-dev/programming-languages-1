#include<stdio.h>
int main()
{
/*	int x = 1;
	switch(x){
		case 1: printf("case 1");
			break;
		case 1: printf("case 1");
			break;
	}							*/	// ERROR
	
	int a = 1, b = 2, c = 3;
	switch(a+b*c){
		case 7: printf("case 7");
			break;
	}								// ALLOWED
	
/*	float d = 1.15, e = 2.0, f = 3.0;
	switch(d+e*f){
		case 1: printf("case 1");
			break;
		case 7.15: printf("case 7.15");
			break;
	}							*/	// ERROR (switch quantity not an integer) (case label not an integer also)
	
	int g = 23;
	switch(g){
		case 3+4*5: printf("\ncase 3+4*5");
			break;
	}								// ALLOWED

	return 0;
}
