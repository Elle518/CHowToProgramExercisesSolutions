/*
       Program: Ch2_Ex2_23.c
   Descripción: This program reads in three integers and then determines and
                prints the largest and the smallest integers in the group.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	int number1;
	int number2;
	int number3;
	int largest;
	int smallest;

	puts("Please, enter three numbers:");
	scanf("%d%d%d", &number1, &number2, &number3);

	largest = number1;

	if (number1 < number2) {
		largest = number2;
	}

	if (number2 < number3) {
		largest = number3;
	}

	smallest = number1;

	if (number1 > number2) {
		smallest = number2;
	}

	if (number2 > number3) {
		smallest = number3;
	}

	printf("%d is the largest.\n", largest);
	printf("%d is the smallest.\n", smallest);

	return 0;

}