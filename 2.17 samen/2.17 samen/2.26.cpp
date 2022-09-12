#include<stdio.h>;
#include<math.h>;


int main(void) {
	int num1;
	int num2;
	printf("Enter two integers: \n");
	scanf_s("%d%d", &num1, &num2);

	if (num1%num2 == 0) {
		printf("%d can be devided by %d\n", num1, num2);
	}
	else {
		if (num2 % num1 == 0) {
			printf("%d can be divided by %d\n", num2, num1);
		}
	}
}