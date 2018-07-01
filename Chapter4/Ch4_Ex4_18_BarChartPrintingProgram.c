/*
       Program: Ch4_Ex4_18_BarChartPrintingProgram.c
   Descripción: This program reads five numbers (each between 1 and 30). For
                each number read, your program should print a line containing
                that number of adjacent asterisks.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int number;

   puts("Please, enter five number between 1 and 30: ");

   for (int i = 1; i <= 5; i++) {

      scanf("%d", &number);

      if (number >= 1 && number <= 30) {

         for (int j = 1; j <= number; j++)  {
            printf("%s", "*");
         }

      } else {
         printf("%s", "Invalid number");
      }

      printf("%s", "\n");

   }

   return 0;

}