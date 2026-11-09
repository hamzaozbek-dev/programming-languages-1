#include<stdio.h>
int main()
{
	int i = 1;
	while(i<=10)
	{
		if(i==5)
		{
			i++;
			continue;		// continue can only used in loops
		}
		printf("i:%d\n",i);
		i++;
	}
	
	return 0;
}
