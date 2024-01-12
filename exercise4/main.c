#include <stdio.h>

int main() {
	int number, bitNumber;
	printf("Exercise 4:\n");
	
	printf("Enter number: ");
	scanf("%d", &number);
	printf("\nI want to know the value of bit number: ");
	scanf("%d", &bitNumber);
	int bitValue = number >> bitNumber - 1;
	printf("\n\nThe value of the %d bit in %d is %.1b\n", bitNumber, number, bitValue);
	return 0;
}
