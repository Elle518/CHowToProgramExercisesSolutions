/*
       Program: Ch2_Ex2_29_IntegerValueCharacter.c
   Descripción: This program prints the integer equivalents of some uppercase
                letters, lowercase letters, digits and special symbols: A B C a
		          b c 0 1 2 $ * + / and the blank character. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
	
	printf("A's integer equivalent is %d.\n", 'A');
	printf("B's integer equivalent is %d.\n", 'B');
	printf("C's integer equivalent is %d.\n", 'C');
	printf("a's integer equivalent is %d.\n", 'a');
	printf("b's integer equivalent is %d.\n", 'b');
	printf("c's integer equivalent is %d.\n", 'c');
	printf("0's integer equivalent is %d.\n", '0');
	printf("1's integer equivalent is %d.\n", '1');
	printf("2's integer equivalent is %d.\n", '2');
	printf("$'s integer equivalent is %d.\n", '$');
	printf("*'s integer equivalent is %d.\n", '*');
	printf("+'s integer equivalent is %d.\n", '+');
	printf("/'s integer equivalent is %d.\n", '/');
	printf("The blank character's integer equivalent is %d.\n", ' ');

	return 0;

}