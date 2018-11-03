/*
       Program: Ch5_Ex5_34_RecursiveExponentiation.c
   Descripción: This program uses a recursive function power(base, exponent)
                that when invoked returns base^exponent.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

long power(long base, long exponent);

int main(void) {

   long base;
   long exponent;

   puts("Please, enter a base and an exponent: ");
   scanf("%ld%ld", &base, &exponent);

   printf("%ld raised to the %ld is %ld.\n", base, exponent, power(base, exponent));

   return 0;

}

long power(long base, long exponent) {

   if (exponent ==  1) {
      return base;
   } else {
      return base * power(base, exponent - 1);
   }

}