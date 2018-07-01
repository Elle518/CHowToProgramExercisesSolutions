/*
       Program: Ch4_Ex4_31_DiamondPrintingProgram.c
   Descripción: This program prints a diamond shape. Uses printf statements that
                print either a single asterisk (*) or a single blank.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int line;
   int space;
   int asterisk;

   for (line = 1; line <= 5; line++) {
      
      for(space = 1; space <= 5 - line; space++) {
         printf("%s", " ");

      }

     for (asterisk = 1; asterisk <= 2 * line - 1; asterisk++) {
         printf("%s", "*");
      }
      
      printf("\n");

   }

   for (line = 1; line <= 4; line++) {
      
      for(space = 1; space <= line; space++) {
         printf("%s", " ");

      }

     for (asterisk = 1; asterisk <= 9 - 2 * line; asterisk++) {
         printf("%s", "*");
      }
      
      printf("\n");

   }

   return 0;

}