/*
       Program: Ch2_Ex2_17_PrintingValues.c
   Descripción: This program prints the numbers 1 to 4 on the same line. The
                program uses the following methods:
		          a) Using one printf statement with no conversion specifiers.
			       b) Using one printf statement with four conversion specifiers.
			       c) Using four printf statements.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	// a)
	printf("1 2 3 4\n");
	
	// b)
	printf("%d %d %d %d\n", 1, 2, 3, 4);

	// c)
	printf("1 ");
	printf("2 ");
	printf("3 ");
	printf("4\n");
	
	return 0;

}