/*
       Program: Ch5_Ex5_16_Exponentiation.c
   Descripción: This program uses a function the returns the value of

                                 base^exponent

                Assumes that exponent is a positive, nonzero integer, and base
                is an integer.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include<stdio.h>

int integerPower(int b, int e);

int main(void) {

   int base;
   int exponent;
   
   puts("Please, enter the base and the exponent: ");
   scanf("%d%d", &base, &exponent);

   printf("The result of %d to the power of %d is %d.\n", base, exponent, integerPower(base, exponent));

   return 0;

}

int integerPower(int b, int e) {
   int result = 1;

   for(int i = 1; i <= e; i++) {
      result = result * b;
   }

   return result;
}