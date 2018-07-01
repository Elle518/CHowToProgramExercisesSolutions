/*
       Program: Ch4_Ex4_26_CalculatingValueOfPi.c
   Descripción: This program prints a table that shows the value of π
                approximated by one term of this series, by two terms, by three
                terms, and so on:

                π = 4 - 4/3 + 4/5 - 4/7 + 4/9 - 4/11 + ...

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include<stdio.h>

int main(void) {

   float pi = 0.0;
   float denom = 1.0;
   int accuracy = 229826;

   printf("Accuracy set at: %d\n", accuracy);
   puts("Loop\tValue of π");

   for (int i = 1; i <= accuracy; i++ ) {
      
      if (i % 2 != 0) {         // Odd term
         pi = pi + 4.0 / denom;
      } else {                  // Even term
         pi = pi - 4.0 / denom;
      }

      printf("%d\t%f\n", i, pi);

      denom = denom + 2.0;
 
   }

   return 0;

}