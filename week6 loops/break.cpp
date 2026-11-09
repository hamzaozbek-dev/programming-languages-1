#include<stdio.h>
int main()
{
	int i = 1;
	for(;;)
	{
		printf("i:%d\n",i);
		i++;
		if(i>5) break;		// break can only used in switch and loops
	}
	
	return 0;
}
