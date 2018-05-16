/*
       Program: Ch2_Ex2_24.c
   Descripción: This program reads an integer and determines and prints whether
                it’s odd or even. [Hint: Use the remainder operator. An even
		          number is a multiple of two. Any multiple of two leaves a
			       remainder of zero when divided by 2.]
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
	
	int integer;
	
	puts("Please, enter an integer:");
	scanf("%d", &integer);

	if (integer % 2 == 0) {
		printf("%d is an even number.\n", integer);
	}

	if (integer % 2 != 0) {
		printf("%d is an odd number.\n", integer);
	}

	return 0;

}