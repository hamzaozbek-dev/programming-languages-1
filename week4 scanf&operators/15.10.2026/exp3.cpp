#include <stdio.h>
int main(void)
{
	int quantity;
	float price;
	printf("Enter quantity: ");
	scanf("%d", &quantity);
	printf("Enter price: ");
	scanf("%f", &price);
	printf("Quantity = %d\n", quantity);
	printf("Price = %.2f\n", price);
	return 0;
}
