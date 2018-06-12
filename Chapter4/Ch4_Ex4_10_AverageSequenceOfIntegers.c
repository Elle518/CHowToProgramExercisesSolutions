/*
       Program: Ch4_Ex4_10_AverageSequenceOfIntegers.c
   Descripción: This program calculates and prints the average of several
                integers. Assume the last value read with scanf is the sentinel
                9999. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int number;
   float average;
   int sum = 0;
   int counter = 0;

   puts("Plese, enter an integer (9999 to end)");
   scanf("%d", &number);

   while (number != 9999) {
      sum = sum + number;
      counter++;

      puts("Plese, enter an integer (9999 to end)");
      scanf("%d", &number);
   }

   if (counter != 0) {
      average = (float)sum / counter;
      printf("The average of the %d numbers is %.2f\n", counter, average);
   } else {
      puts("No values were entered.");
   }

   return 0;

}