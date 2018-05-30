/*
       Program: Ch3_Ex3_22_PrintingNumbersFromLoop.c
   Descripción: This program utilizes looping to print the numbers from 1 to 10
                side by side on the same line with three spaces between numbers.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int i = 1;

   while (i <= 10) {
      printf("%d   ", i);
      i++;
   }

   printf("\n");

   return 0;

}