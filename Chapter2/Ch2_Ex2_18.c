/*
       Program: Ch2_Ex2_18.c
   Descripción: This program asks the user to enter two integers, obtains the
                numbers from the user, then prints the larger number followed by
		          the words “is larger.” If the numbers are equal, print the
			       message “These numbers are equal.” Use only the single-selection
			       form of the if statement.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
	int number1;
	int number2;
	
	puts("Please, enter two integers:");
	scanf("%d%d", &number1, &number2);

	if (number1 > number2) {
		printf("%d is larger.\n", number1);
	}

	if (number1 < number2) {
		printf("%d is larger.\n", number2);
	}

	if (number1 == number2) {
		puts("These numbers are equal.");
	}

	return 0;
}