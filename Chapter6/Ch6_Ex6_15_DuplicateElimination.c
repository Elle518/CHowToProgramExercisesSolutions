/*
       Program: Ch6_Ex6_15_DuplicateElimination.c
   Descripción: This program reads in 20 numbers, each of which is between 10
                and 100, inclusive. As each number is read, print it only if
                it’s not a duplicate of a number already read. Provide for the
                “worst case” in which all 20 numbers are different. Use the
                smallest possible array to solve this problem.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#define SIZE 20

int main(void) {

   int numbers[SIZE];
   int number;
   int duplicate;

   printf("%s\n", "Enter 20 integers between 10 and 100");

   for (int i = 0; i < SIZE; i++) {
      scanf("%d", &number);
      numbers[i] = number;
   }

   printf("%s\n", "These are the nonduplicate values:");

   for (int j = 0; j < SIZE; j++) {

      duplicate = 0;

      for (int h = 0; h < SIZE; h++) {

         if (j == h) {
            continue;
         } else if (numbers[j] == numbers[h]) {
            duplicate = 1;
         }

      }

      if (duplicate == 0) {
         printf("%d ", numbers[j]);
      }
      
   }

   puts("");

   return 0;

}