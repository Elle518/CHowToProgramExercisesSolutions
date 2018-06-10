/*
       Program: Ch3_Ex3_43_SidesOfTriangle.c
   Descripción: This program reads three nonzero integer values and determines
                and prints whether they could represent the sides of a triangle.
                The triangle inequality states that for any triangle, the sum of
                the lengths of any two sides must be greater than the length of
                the remaining side.

                  a + b > c
                  b + c > a
                  c + a > b

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int sideA, sideB, sideC;

   puts("Please, enter three nonzero integer values:");
   scanf("%d%d%d", &sideA, &sideB, &sideC);

   if (sideA + sideB > sideC &&
       sideB + sideC > sideA &&
       sideC + sideA > sideB) {
      puts("They could represent a triangle.");
   } else {
      puts("They couldn't represent a triangle.");
   }

   return 0;

}