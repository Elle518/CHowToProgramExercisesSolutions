/*
       Program: Ch3_Ex3_45_Factorial1.c
   Descripción: This program reads a nonnegative integer and computes and prints
                its factorial.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/


#include <stdio.h>

int main() {

   int number;
   int aux;
   int factorial = 1;

   puts("Please, enter a nonzero integer value:");
   scanf("%d", &number);

   aux = number;

   if (number == 0) {

      printf("The factorial of %d! is 1.\n", number);
      
   } else {

      while (aux > 1) {
         factorial = factorial * aux;
         aux--;
      }

      printf("The factorial of %d! is %d.\n", number, factorial);

   }

   return 0;

}