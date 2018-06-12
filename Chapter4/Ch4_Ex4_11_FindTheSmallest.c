/*
       Program: Ch4_Ex4_11_FindTheSmallest.c
   Descripción: This program finds the smallest of several integers. Assume that
                the first value read specifies the number of values remaining.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int counter;
   int number;
   int smallest;
   int i = 1;

   puts("Enter the number of values remaining: ");
   scanf("%d", &counter);

   puts("Please, enter a integer: ");
   scanf("%d", &number);

   smallest = number;

   while (i < counter) {
      puts("Please, enter a integer: ");
      scanf("%d", &number);

      if (number < smallest) {
         smallest = number;
      }

      i++;
   }

   printf("The smallest number is %d.\n", smallest);

   return 0;

}