#include <stdio.h>;


int main(void) {
	int u, a, t;
	int A;
	int B;

	printf("Enter variables u, a and t. \n");

	scanf_s("%d%d%d", u, a, t);
	A = &u+&a*&t;
	B = &u*0, 5*(&a * &t ^ 2);
	printf("The velocity v is \n", A);

	printf("The distance traversed is \n", B);
	return(0);

}