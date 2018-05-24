/*
       Program: Ch3_Ex3_6_SumIntegers.c
   Descripción: This program calculates the sum of the integers from 1 to 10.
                Use the while statement to loop through the calculation and
                increment statements. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
	
	unsigned int x = 1;
  unsigned int sum = 0;

  while (x <= 10) {
    sum = sum + x;
    x++;
  }

  printf("The sum is: %u\n", sum);

	return 0;

}