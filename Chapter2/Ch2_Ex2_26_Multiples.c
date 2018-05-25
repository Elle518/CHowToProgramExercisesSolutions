/*
       Program: Ch2_Ex2_26_Multiples.c
   Descripción: This program reads in two integers and determines and prints
                whether the first is a multiple of the second. [Hint: Use the
                remainder operator.]
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int number1;
   int number2;

   puts("Please, enter two integers:");
   scanf("%d%d", &number1, &number2);

   if (number1 % number2 == 0) {
      printf("%d is a multiple of %d.\n", number1, number2);
   }
   
   if (number1 % number2 != 0) {
      printf("%d is not a multiple of %d.\n", number1, number2);
   }

   return 0;

}