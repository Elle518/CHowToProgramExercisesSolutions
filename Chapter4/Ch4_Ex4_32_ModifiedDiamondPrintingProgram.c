/*
       Program: Ch4_Ex4_32_ModifiedDiamondPrintingProgram.c
   Descripción: This program reads an odd number in the range 1 to 19 to specify
                the number of rows in the diamond and prints a diamond shape.
                Uses printf statements that print either a single asterisk (*)
                or a single blank.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int line;
   int space;
   int asterisk;
   int side;

   do {
      puts("Please, enter an odd number between 1 and 19: ");
      scanf("%d", &side);
   } while (side < 1 || side > 19 || side % 2 == 0);


   for (line = 1; line <= side; line++) {
      
      for(space = 1; space <= side - line; space++) {
         printf("%s", " ");

      }

     for (asterisk = 1; asterisk <= 2 * line - 1; asterisk++) {
         printf("%s", "*");
      }
      
      printf("%s", "\n");

   }

   for (line = 1; line <= side - 1; line++) {
      
      for(space = 1; space <= line; space++) {
         printf("%s", " ");

      }

     for (asterisk = 1; asterisk <= 2 * side - 1 - 2 * line; asterisk++) {
         printf("%s", "*");
      }
      
      printf("%s", "\n");

   }

   return 0;

}