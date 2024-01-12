#include <stdio.h>

int main() {
	unsigned int firstNumber, secondNumber, lastFourDigits;
	int sum;

	printf("Exercise 2:\n");
	printf("Enter 2 hexadecimal numbers:\n");
	
	printf("Hex 1: ");
	scanf("%x", &firstNumber);
	printf("Hex 2: ");
	scanf("%x", &secondNumber);
	
	sum = firstNumber + secondNumber;	
	lastFourDigits = sum & 0xF;
	
	printf("\n%X + %X = %X\n", firstNumber, secondNumber, sum);
	printf("The last 4 binary digits of the sum are %.4b\n", lastFourDigits);
	return 0;
}
