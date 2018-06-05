/*
       Program: Ch3_Ex3_38_Counting7s.c
   Descripción: This program reads an integer (5 digits or fewer) and determines
                and prints how many digits in the integer are 7s.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int number;
   int digit;
   int counter = 0;
   int factor = 10000;

   puts("Please, enter a five-digit or fewer integer:");
   scanf("%5d", &number);

   while (number >= 1) {
      digit = number / factor;
      number = number % factor;

      if (digit == 7) {
         counter++;
      }

      factor = factor / 10;
   }

   printf("This number has %d seven(s).\n", counter);

   return 0;

}