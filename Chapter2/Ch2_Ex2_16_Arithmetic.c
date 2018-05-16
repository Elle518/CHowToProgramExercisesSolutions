/*
       Program: Ch2_Ex2_16.c
   Descripción: This program asks the user to enter two numbers,
                obtains them from the user and prints their sum,
                product, difference, quotient and remainder.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	int number1;
	int number2;

	puts("Please, enter two numbers:");
	scanf("%d%d", &number1, &number2);

	printf("The sum is %d.\n", number1 + number2);
	printf("The difference is %d.\n", number1 - number2);
	printf("The product is %d.\n", number1 * number2);
	printf("The quotient is %d.\n", number1 / number2);
	printf("The remainder is %d.\n", number1 % number2);

	return 0;

}