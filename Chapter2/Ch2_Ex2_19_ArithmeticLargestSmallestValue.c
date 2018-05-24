/*
       Program: Ch2_Ex2_19_ArithmeticLargestSmallest.c
   Descripción: This program inputs three different integers from the keyboard,
                then prints the sum, the average, the product, the smallest and
                the largest of these numbers. Use only the single-selection form
                of the if statement. The screen dialogue should appear as follows:

			       	Enter three different integers: 13 27 14
			       	Sum is 54
			       	Average is 18
			       	Product is 4914
			       	Smallest is 13
			       	Largest is 27
						
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	int number1;
	int number2;
	int number3;
	int smallest;
	int largest;

	printf("%s", "Enter three different integers: ");
	scanf("%d%d%d", &number1, &number2, &number3);

	printf("Sum is %d\n", number1 + number2 + number3);
	printf("Average is %d\n", (number1 + number2 + number3) / 3);
	printf("Product is %d\n", number1 * number2 * number3);

	smallest = number1;

	if (number2 < smallest) {
		smallest = number2;
	}

	if (number3 < smallest) {
		smallest = number3;
	}

	printf("Smallest is %d\n", smallest);

	largest = number1;

	if (number2 > largest) {
		largest = number2;
	}

	if (number3 > largest) {
		largest = number3;
	}

	printf("Largest is %d\n", largest);

	return 0;

}