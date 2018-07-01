/*
       Program: Ch4_Ex4_12_CalculatingSumEvenIntegers.c
   Descripción: This program calculates and prints the sum of the even integers
                from 2 to 30.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int sum = 0;

   for (int i = 2; i <= 30; i +=2) {
      sum = sum + i;
   }

   printf("The sum of the even integers from 2 to 30 is %d.\n", sum);

   return 0;

}