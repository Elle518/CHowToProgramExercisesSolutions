/*
       Program: Ch3_Ex3_45_Factorial2.c
   Descripción: This program estimates the value of the mathematical constant e
                by using the formula:

                  e = 1 + (1 / 1!) + (1 / 2!) + (1 / 3!) + ...

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main() {

   float e = 1.0;
   int accuracy = 1;
   int factorial = 1;
   int aux;

   while (accuracy <= 10) {
      factorial = 1;
      aux = accuracy;

      while (aux >= 1) {
         factorial = factorial * aux;
         aux--;
      }

      e = e + (1.0 / (float)factorial);
      accuracy++;
   }
 
   printf("The number e is equal to %f.\n", e);

   return 0;

}