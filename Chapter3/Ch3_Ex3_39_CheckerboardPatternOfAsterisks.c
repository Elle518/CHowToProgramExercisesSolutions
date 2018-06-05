/*
       Program: Ch3_Ex3_39_CheckerboardPatternOfAsterisks.c
   Descripción: This program displays a checkerboard pattern.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int column = 1;
   int row = 1;

   while (row <= 8) {

      while (column <= 8) {
         printf( "%s", "* " );
         column++;
      }

      puts( "" );
      
      if (row % 2 != 0) {
         printf( "%s", " " );
      }
      
      column = 1;
      row++;
   }

   return 0;

}