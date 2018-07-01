/*
       Program: Ch4_Ex4_25_NumberSystemsTableOfEquivalents.c
   Descripción: This program prints a table of the binary, octal and hexadecimal
                equivalents of the decimal numbers in the range 1 through 256.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int binaryDigit;
   int aux;

   puts("Decimal\tBinary\t\tOctal\tHexadecimal");

   for (int i = 1; i <= 256 ; i++) {

      printf("%d\t", i);
      aux = i;
      
      for (int j = 256; j >= 1; j /= 2) {
         binaryDigit = aux / j;
         aux = aux % j;
         printf("%d", binaryDigit);
      } 

      printf("\t%o\t%x\t\n", i, i);
   }

   return 0;

}