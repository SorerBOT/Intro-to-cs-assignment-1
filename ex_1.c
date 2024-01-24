/************************
 * Alon Filler
 * 216872374
 * Assignment 1
 *************************/

#include <stdio.h>
#include <math.h>

int main() {
	/*
		EXERCISE 1
		Input: Two char arrays representing the digits of two numbers
		Output: The result of applying the XOR operation on the nubmer
	*/
	char first1, first2, first3, first4;
	char second1, second2, second3, second4;
	printf("Exercise 1:\n");
	printf("Please enter 2 binary strings with 4 digits:\n");
	
	printf("Binary 1: ");
	scanf("%c%c%c%c", &first1, &first2, &first3, &first4);

	printf("Binary 2: ");
	scanf(" %c%c%c%c", &second1, &second2, &second3, &second4);
	
	printf("\n%c%c%c%c\n", first1, first2, first3, first4);
	printf("^");
	printf("\n%c%c%c%c\n", second1, second2, second3, second4);
	printf("--------\n");
	printf("%d", (first1 - 48) ^ (second1 - 48));
	printf("%d", (first2 - 48) ^ (second2 - 48));
	printf("%d", (first3 - 48) ^ (second3 - 48));
	printf("%d\n", (first4 - 48) ^ (second4 - 48));
	/*
		EXERCISE 2
		Input: Two hexadecimal numbers
		Output: The last four binary digits of the numbers' sum
	*/
	printf("\n");
	int num1, num2;
	int sum;

	printf("Exercise 2:\n");
	printf("Enter 2 hexadecimal numbers:\n");
	
	printf("Hex 1: ");
	scanf("%x", &num1);
	printf("Hex 2: ");
	scanf("%x", &num2);
	
	sum = num1 + num2;	
	
	printf("\n%X + %X = %X\n", num1, num2, sum);
	printf("The last 4 binary digits of the sum are ");
	printf("%u", (sum >> 3) & 0x1);
	printf("%u", (sum >> 2) & 0x1);
	printf("%u", (sum >> 1) & 0x1);
	printf("%u\n", (sum) & 0x1);
	/*
		EXERCISE 3
		Input: A base between 2-9 and a number in that base
		Output: The decimal value of the number
	*/
	printf("\n");
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
	printf("The decimal value of %d in base %d is %d\n", number, base, numberInNewBase);
	/*
		EXERCISE 4
		Input: A number and an index of a bit
		Output: The binary value of that bit in the number
	*/
	printf("\n");
	int num, bitNumber;
	printf("Exercise 4:\n");
	
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("I want to know the value of bit number: ");
	scanf("%d", &bitNumber);
	unsigned int bitValue = (num >> (bitNumber - 1)) & 0x1;
	printf("\nThe value of the %d bit in %d is %.1u\n", bitNumber, num, bitValue);
	printf("Congrats! You've found the philosopher's stone!\n");
	return 0;
}
