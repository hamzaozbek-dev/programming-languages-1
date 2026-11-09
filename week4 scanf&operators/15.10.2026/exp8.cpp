#include<stdio.h>
int main()
{
	int age;
	char grade;
	printf("Enter age:");
	scanf("%d", &age);
	printf("Enter grade:");
	//scanf("%c", &grade);//incorrect
	scanf(" %c", &grade);//correct
	printf("age\t:%d",age);
	printf("\ngrade\t:%c",grade);
	return 0;
	
}

