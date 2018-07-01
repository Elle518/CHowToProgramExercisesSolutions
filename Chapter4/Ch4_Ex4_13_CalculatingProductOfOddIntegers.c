/*
       Program: Ch4_Ex4_13_CalculatingProductOfOddIntegers.c
   Descripción: This program calculates and prints the product of the odd
                integers from 1 to 15.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int product = 1;

   for (int i = 1; i <= 15; i +=2) {
      product = product * i;
   }

   printf("The product of the odd integers from 1 to 15 is %d.\n", product);

   return 0;

}