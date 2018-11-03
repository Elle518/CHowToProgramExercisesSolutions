/*
       Program: Ch5_Ex5_25_FindTheMinimum.c
   Descripción: This program uses a function that returns the smallest of three
                floating-point numbers.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

float findSmallest(float n1, float n2, float n3);

int main(void) {

   float num1, num2, num3;

   puts("Plese, enter three floating-point numbers: ");
   scanf("%f%f%f", &num1, &num2, &num3);

   printf("%f is the smallest number.\n", findSmallest(num1, num2, num3));

   return 0;

}

float findSmallest(float n1, float n2, float n3) {

   float aux = n1;

   if (n2 < aux) {
      aux = n2;
   }

   if (n3 < aux) {
      aux = n3;
   }

   return aux;
}