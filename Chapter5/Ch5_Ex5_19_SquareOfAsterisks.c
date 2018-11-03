/*
       Program: Ch5_Ex5_19_SquareOfAsterisks.c
   Descripción: This program uses a function that displays a solid square of
                asterisks whose side is specified in integer parameter side. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void displaySquare(int side);

int main(void) {

   int side;

   puts("Please, enter the side of the square: ");
   scanf("%d", &side);

   displaySquare(side);

   return 0;

}

void displaySquare(int side) {

   for (int i = 1; i <= side; i++) {

      for (int j = 1; j <= side; j++) {
         printf("%s", "* ");         
      }

      printf("%s", "\n");
      
   }

}