/*
       Program: Ch3_Ex3_35_BinaryToDecimal.c
   Descripción: This program inputs an integer (5 digits or fewer) containing
                only 0s and 1s (i.e., a “binary” integer) and prints its decimal
                equivalent.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int binary;
   int decimal = 0;
   int bitValue = 16;
   int factor = 10000;

   puts("Please, enter a five-digit or fewer binary integer:");
   scanf("%5d", &binary);

   while (binary >= 1) {
      decimal = decimal + (binary / factor) * bitValue;
      binary = binary % factor;
      bitValue = bitValue / 2;
      factor = factor / 10;
   }

   printf("%d is its decimal equivalent.\n", decimal);

   return 0;

}