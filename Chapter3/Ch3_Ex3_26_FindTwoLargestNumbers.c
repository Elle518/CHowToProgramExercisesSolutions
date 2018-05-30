/*
       Program: Ch3_Ex3_26_FindTwoLargestNumbers.c
   Descripción: This program inputs a series of 10 non-negative numbers and
                finds the two largest values of the 10 numbers.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   unsigned int counter = 1;
   unsigned int number;
   unsigned int largest = 0;
   unsigned int secondLargest = 0;

   while (counter <= 10) {
      printf("%s", "Enter a non-negative number: ");
      scanf("%u", &number);

      counter++;

      if (number > largest) {
         secondLargest = largest;
         largest = number;
      } else if (number > secondLargest) {
         secondLargest = number;
      }
   }

   printf("The largest number is %u.\n", largest);
   printf("The second largest number is %u.\n", secondLargest);

   return 0;

}