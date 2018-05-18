/*
       Program: Ch2_Ex2_31_TableSquaresCubes.c
   Descripción: This program calculates the squares and cubes of the numbers
                from 0 to 10 and uses tabs to print a table.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
	
	printf("%s", "number\tsquare\tcube\n");
	printf("%d\t%d\t%d\n", 0, 0 * 0, 0 * 0 * 0);
	printf("%d\t%d\t%d\n", 1, 1 * 1, 1 * 1 * 1);
	printf("%d\t%d\t%d\n", 2, 2 * 2, 2 * 2 * 2);
	printf("%d\t%d\t%d\n", 3, 3 * 3, 3 * 3 * 3);
	printf("%d\t%d\t%d\n", 4, 4 * 4, 4 * 4 * 4);
	printf("%d\t%d\t%d\n", 5, 5 * 5, 5 * 5 * 5);
	printf("%d\t%d\t%d\n", 6, 6 * 6, 6 * 6 * 6);
	printf("%d\t%d\t%d\n", 7, 7 * 7, 7 * 7 * 7);
	printf("%d\t%d\t%d\n", 8, 8 * 8, 8 * 8 * 8);
	printf("%d\t%d\t%d\n", 9, 9 * 9, 9 * 9 * 9);
	printf("%d\t%d\t%d\n", 10, 10 * 10, 10 * 10 * 10);
	
	return 0;

}