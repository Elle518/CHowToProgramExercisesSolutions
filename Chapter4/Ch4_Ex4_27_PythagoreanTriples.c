/*
       Program: Ch4_Ex4_27_PythagoreanTriples.c
   Descripción: This program finds all Pythagorean triples for side1, side2 and
                the hypotenuse, all no larger than 500. Uses a triple-nested for
                loop that simply tries all possibilities. This is an example of
                “brute-force” computing. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

// A right triangle can have sides that are all integers.
// The set of three integer values for the sides of a right
// triangle is called a Pythagorean triple. These three
// sides must satisfy the relationship that the sum of the
// squares of two of the sides is equal to the square of
// the hypotenuse.

#include <stdio.h>

int main(void) {

   int count = 0;

   puts("Side 1\tSide 2\tHypotenuse");

   for(int side1 = 1; side1 <= 500; side1++) {

      for(int side2 = 1; side2 <= 500; side2++) {

         for(int hypotenuse = 1; hypotenuse <= 500; hypotenuse++) {

            if(hypotenuse * hypotenuse == side1 * side1 + side2 * side2) {
               printf("%d\t%d\t%d\n", side1, side2, hypotenuse);
               count++;
            }

         }

      }

   }

   printf("%d Pythagorean triples were found\n", count);

   return 0;

}