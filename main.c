#include <stdio.h>
#include <math.h>

int main() {
	// EXERCISE 1
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
	
	// EXERCISE 2
	unsigned int num1, num2, lastFourDigits;
	int sum;

	printf("Exercise 2:\n");
	printf("Enter 2 hexadecimal numbers:\n");
	
	printf("Hex 1: ");
	scanf("%x", &num1);
	printf("Hex 2: ");
	scanf("%x", &num2);
	
	sum = num1 + num2;	
	lastFourDigits = sum & 0xF;
	
	printf("\n%X + %X = %X\n", num1, num2, sum);
	printf("The last 4 binary digits of the sum are %.4b\n", lastFourDigits);
	
	// EXERCISE 3
	int base, number, temp;
	int numberInNewBase = 0, reversedNumber = 0;

	printf("Exercise 3:\n");
	
	printf("Choose a base between 2 to 9: ");
	scanf("%d", &base);
	printf("Enter a 5 digit number using that base: ");
	scanf("%d", &number);
	
	temp = number;
	// First Iteration
	numberInNewBase += (temp % 10) * pow(base, 0);
	temp /= 10;
	// Second Iteration(temp
	numberInNewBase += (temp % 10) * pow(base, 1);
	temp /= 10;
	// Third Iteration
	numberInNewBase += (temp % 10) * pow(base, 2);
	temp /= 10;
	// Fourth Iteration(temp
	numberInNewBase += (temp % 10) * pow(base, 3);
	temp /= 10;
	// Fifth Iteration
	numberInNewBase += (temp % 10) * pow(base, 4);
	printf("The decimal\nvalue of %d in base %d is %d\n", number, base, numberInNewBase);
	
	// EXERCISE 4
	int num, bitNumber;
	printf("Exercise 4:\n");
	
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("I want to know the value of bit number: ");
	scanf("%d", &bitNumber);
	int bitValue = num >> (bitNumber - 1);
	printf("\nThe value of the %d bit in %d is %.1b\n", bitNumber, num, bitValue);
	printf("Congrats! You've found the philosopher's stone!\n");
	return 0;
}
