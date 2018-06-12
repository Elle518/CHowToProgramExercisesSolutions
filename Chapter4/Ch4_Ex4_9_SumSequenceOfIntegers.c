/*
       Program: Ch4_Ex4_9_SumSequenceOfIntegers.c
   Descripción: This program sums a sequence of integers. Assume that the first
                integer read with scanf specifies the number of values remaining
                to be entered. The program reads only one value each time scanf
                is executed. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int counter;
   int number;
   int sum = 0;
   int i = 1;

   puts("Enter the number of values you want to sum: ");
   scanf("%d", &counter);

   while (i <= counter) {
      puts("Please, enter a integer: ");
      scanf("%d", &number);

      sum = sum + number;

      i++;
   }

   printf("The sum of the sequence is %d.\n", sum);

   return 0;

}