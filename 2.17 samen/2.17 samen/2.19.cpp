#include<stdio.h>;

int main(void)
{
	int integer1;
	int integer2;
	int integer3;
	int sum;
	int adverage;
	int product;
	int smallest;
	int largest;

	printf("Enter three different integers: ");
	scanf_s("%d%d%d", &integer1, &integer2, &integer3);
	sum = integer1 + integer2 + integer3;
	printf("Sum is: %d \n", sum);
	adverage = sum / 3;
	printf("Average is: %d \n", adverage);
	product = integer1 * integer2 * integer3;
	printf("Product is: %d \n", product);

	if (integer1 > integer2 & integer2 < integer3) {
		smallest = integer2;
	}
	if (integer1 < integer2 & integer1 < integer3) {
		smallest = integer1;
	}
	if (integer3 < integer2 & integer3 < integer1) {
		smallest = integer3;
	}
	printf("Smallest is: %d \n", smallest);
	if (integer1 > integer2 & integer1 > integer3) {
		largest = integer1;
	}
	if (integer2 > integer1 & integer2 > integer3) {
		largest = integer2;
	}
	if (integer3 > integer1 & integer3 > integer2) {
		largest = integer3;
	}
	printf("largest is: %d \n", largest);

}