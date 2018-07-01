/*
       Program: Ch4_Ex4_39_LimitationsOfFloatForMonetaryAmounts.c
   Descripción: This program creates a float variable with the value 1000000.00.
                Next adds to that variable the literal float value 0.12f and
                displays the result using printf and the conversion specifier
                "%.2f".
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   float value = 1000000.00;
   float total = value + 0.12f;

   printf("%.2f\n", value + 0.12f);

   return 0;

}