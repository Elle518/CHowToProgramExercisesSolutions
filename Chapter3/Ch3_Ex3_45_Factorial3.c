/*
       Program: Ch3_Ex3_45_Factorial3.c
   Descripción: This program computes the value of e^x by using the formula:

                  e^x = 1 + (x / 1!) + (x^2 / 2!) + (x^3 / 3!) + ...

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main() {

   float e = 1.0;
   float power = 1.0;
   float factorial = 1.0;
   int accuracy = 1;
   int aux = 1;
   int exponent;

   puts("Please, enter the power of e:");
   scanf("%d", &exponent);

   while (accuracy <= 15) {

      while (aux <= accuracy) {
         factorial = factorial * (float)aux;
         power = power * (float)exponent;
         aux++;
      }

      e = e + (power / factorial);

      accuracy++;

   }

   printf("e raised to the %d power is equal to %f.\n", exponent, e);

   return 0;

}