#include<stdio.h>;
#include <math.h>;

int main(void) 
{
	int variablea;
	int variableu;
	int variablet;
	int velocity;
	int distancetraversd;

	printf("Please fill in the variables a, u and t. \n");
	scanf_s("%d%d%d", &variablea, &variableu, &variablet);


	velocity = variableu + variablea * variablet;
	printf("Velocity is: %d \n", velocity);


	distancetraversd = variableu * variablet + 0, 5 * variablea * variablet ^ 2;
		printf("Distance traversd is: %d \n", distancetraversd);

}