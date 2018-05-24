/*
       Program: Ch2_Ex2_27_CheckerboardPattern.c
   Descripción: This program displays a checkerboard pattern with eight printf
                statements and then display the same pattern with as few printf
                statements as possible.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

	puts("Eight printf statements:");
	printf("%s", "* * * * * * * *\n");
	printf("%s", " * * * * * * * *\n");
	printf("%s", "* * * * * * * *\n");
	printf("%s", " * * * * * * * *\n");
	printf("%s", "* * * * * * * *\n");
	printf("%s", " * * * * * * * *\n");
	printf("%s", "* * * * * * * *\n");
	printf("%s", " * * * * * * * *\n\n");

	puts("One printf statement:");
	printf("%s", "* * * * * * * *\n * * * * * * * *\n"
			       "* * * * * * * *\n * * * * * * * *\n"
			       "* * * * * * * *\n * * * * * * * *\n"
			       "* * * * * * * *\n * * * * * * * *\n");

	return 0;

}