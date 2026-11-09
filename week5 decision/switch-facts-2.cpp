#include<stdio.h>

#define d 23

int main(){
/*	int x = 2, y = 2;
	switch(x){
		case y: printf("case y");
			break;
	}							*/	// ERROR (case label does not reduce to an integer constant)
	
	const int b = 2;
	int a = 2;
	switch(a){
		case b: printf("case b");
			break;
	}								// ALLOWED
	 
	switch(int c = 23){
		case d: printf("\ncase d");
			break;
	}								// ALLOWED
	
	int e = 1;
	switch(e){
		default: printf("default");
			break;
		case 1: printf("\ncase 1");
			break;
	}								// ALLOWED
	
	return 0;
}
