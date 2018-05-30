/*
       Program: Ch3_Ex3_23_FindLargestNumber.c
   Descripción: This program inputs a series of 10 non-negative numbers and
                determines and prints the largest of the numbers.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   unsigned int counter = 1;
   unsigned int number;
   unsigned int largest = 0;

   while (counter <= 10) {
      printf("%s", "Enter a non-negative number: ");
      scanf("%u", &number);

      counter++;

      if (number > largest) {
         largest = number;
      }
   }

   printf("The largest number is %u.\n", largest);

   return 0;

}