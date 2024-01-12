#include <stdio.h>

int main() {
	char firstNumber[5], secondNumber[5], result[5];
	printf("Exercise 1:\n");
	printf("Please enter 2 binary strings with 4 digits:\n");
	
	printf("Binary 1: ");
	scanf("%4s", firstNumber);

	printf("Binary 2: ");
	scanf("%4s", secondNumber);
	
	printf("\n%s\n", firstNumber);
	printf("^");
	printf("\n%s\n", secondNumber);
	printf("--------\n");
	printf("%d", (firstNumber[0] - 48) ^ (secondNumber[0] - 48));
	printf("%d", (firstNumber[1] - 48) ^ (secondNumber[1] - 48));
	printf("%d", (firstNumber[2] - 48) ^ (secondNumber[2] - 48));
	printf("%d\n", (firstNumber[3] - 48) ^ (secondNumber[3] - 48));
	return 0;
}
