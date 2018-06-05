/*
       Program: Ch3_Ex3_37_DetectingMultiplesOf10.c
   Descripción: This program prints 100 asterisks, one at a time. After every
                tenth asterisk, the program prints a newline character.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int counter = 1;

   while (counter <= 100) {
      printf("%s", "*");
      
      if (counter % 10 == 0) {
         printf("%s", "\n");
      }

      counter++;
   }

   return 0;

}