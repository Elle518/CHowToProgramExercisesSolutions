/*
       Program: Ch5_Ex5_10_RoundingNumbers.c
   Descripción: This program reads several numbers and rounds each of these
                numbers to the nearest integer. For each number processed,
                prints both the original number and the rounded number.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
   
   float number;
   int roundedNumber;

   puts("Please, enter numbers to be rounded (-1 to end): ");
   scanf("%f", &number);

   puts("Number\t\tRounded");

   while (number != -1) {

      printf("%f\t\t", number);
      roundedNumber = floor(number + .5);
      printf("%d\n", roundedNumber);

      scanf("%f", &number);
   }

   return 0;

}