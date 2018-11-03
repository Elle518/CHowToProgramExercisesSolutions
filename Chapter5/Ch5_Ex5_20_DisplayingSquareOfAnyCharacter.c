/*
       Program: Ch5_Ex5_20_DisplayingSquareOfAnyCharacter.c
   Descripción: This program uses a function that displays a solid square of
                whatever character is contained in character parameter
                fillCharacter and whose side is specified in integer parameter
                side. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void displaySquare(int side, char fillCharacter);

int main(void) {

   int squareSide;
   char character = 'r';

   puts("Please, enter the side of the square and a character: ");
   scanf("%d %c", &squareSide, &character);
   // %c do not consume leading whitespace, can be made to do so by
   // using a whitespace character in the format string.

   displaySquare(squareSide, character);

   return 0;

}

void displaySquare(int side, char fillCharacter) {

   for (int i = 1; i <= side; i++) {

      for (int j = 1; j <= side; j++) {
         printf(" %c", fillCharacter);         
      }

      printf("%s", "\n");
      
   }

}