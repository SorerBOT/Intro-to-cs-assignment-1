#include <stdio.h>
#include <math.h>

int main() {
	int base, number, temp;
	int numberInNewBase = 0, reversedNumber = 0;

	printf("Exercise 3:\n");
	
	printf("Choose a base between 2 to 9: ");
	scanf("%d", &base);
	printf("\nEnter a 5 digit number using that base: ");
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
	printf("\nThe decimal value of %d in base %d is %d\n", number, base, numberInNewBase);
	return 0;
}
