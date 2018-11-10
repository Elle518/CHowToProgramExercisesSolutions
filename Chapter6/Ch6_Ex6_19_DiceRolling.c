/*
       Program: Ch6_Ex6_19_DiceRolling.c
   Descripción: This program simulates the rolling of two dice and calculates
                the sum of the two values. Rolls the two dice 36,000 times and
                uses a one-dimensional array to tally the numbers of times each
                possible sum appears. Also prints the results in a tabular
                format and determines if the totals are reasonable. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 11

int main(void) {

   int value1;
   int value2;
   int obtainedValues[SIZE] = {0};
   int expectedValues[SIZE] = {1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1};

   srand(time(NULL));

   for (int i = 0 ; i < 36000; i++) {

      value1 = 1 + rand() % 6;
      value2 = 1 + rand() % 6;
      obtainedValues[value1 + value2 - 2]++;

   }

   puts("Sum    Total   Expected     Actual");

   for (int j = 0; j < SIZE; j++) {
      printf("%3d%9d%10.3f%%%10.3f%%\n",
             j + 2, obtainedValues[j],
             (float)expectedValues[j] * 100 / 36,
             (float)obtainedValues[j] * 100 / 36000);
   }

   return 0;

}