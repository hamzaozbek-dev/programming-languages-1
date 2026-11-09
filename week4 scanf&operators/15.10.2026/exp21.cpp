#include <stdio.h>
int main(void)
{
	int age = 25,c;
	int hasLicense = 1;
	c=(age >= 18) || (hasLicense == 0);
	printf("%d\n",c );
	c=(age < 18) || (hasLicense == 1);
	printf("%d\n",c );
	c=(age <= 18) || (hasLicense == 0);
	printf("%d\n",c );
	return 0;
}
