/*
       Program: Ch4_Ex4_16_TrianglePrintingProgram.c
   Descripción: This program prints separately four different patterns, one
                below the other, using asterisks.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   // A
   for (int i = 1; i <= 10; i++) {

      for (int j = 1; j <= i; j++) {
         printf("%s", "*");
      }

      printf("%s", "\n");

   }

   puts("");

   // B
   for (int i = 10; i >= 1; i--) {

      for (int j = 1; j <= i; j++) {
         printf("%s", "*");
      }

      printf("%s", "\n");

   }

   puts("");

   // C

   for (int i = 10; i >= 1; i--) {

      for (int j = 0; j < 10 - i; j++) {
         printf("%s", " ");
      }

      for (int j = 1; j <= i; j++) {
         printf("%s", "*");
      }

      printf("%s", "\n");

   }

   puts("");

   // D
   for (int i = 1; i <= 10; i++) {

      for (int j = 1; j <= 10 - i ; j++) {
         printf("%s", " ");
      }

      for (int j = 1; j <= i; j++) {
         printf("%s", "*");
      }

      printf("%s", "\n");

   }

   return 0;

}