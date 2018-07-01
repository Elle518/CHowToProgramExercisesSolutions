/*
       Program: Ch4_Ex4_14_Factorials.c
   Descripción: This program evaluates the factorials of the integers from 1 to
                5 and print the results in tabular format.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int factorial = 1;
   
   printf("%s\t%s\n", "Number", "Factorial");

   for (int i = 1; i <= 5; i++) {
      
      factorial = 1;

      for (int j = 1; j <= i; j++) {
         factorial = factorial * j;
      }

      printf("%d\t%d\n", i, factorial);
   }

   return 0;

}