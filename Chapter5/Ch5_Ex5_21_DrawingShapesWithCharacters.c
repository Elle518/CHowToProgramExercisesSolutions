/*
       Program: Ch5_Ex5_21_DrawingShapesWithCharacters.c
   Descripción: This program graphs a wide range of shapes.
                side. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void displayTriangle(int side, char fillCharacter);
void displaySquare(int side, char fillCharacter);
void displayDiamond(int side, char fillCharacter);

int main(void) {

   int sideLength;
   int numberOfSides;
   char character;

   puts("Please, enter the length of the side and a character: ");
   scanf("%d %c", &sideLength, &character);
   // %c do not consume leading whitespace, can be made to do so by
   // using a whitespace character in the format string.

   do {
      puts("Please, enter the number of sides (3 - triangle, 4 - square, 5 - diamond): ");
      scanf("%d", &numberOfSides);
   } while (numberOfSides != 3 && numberOfSides != 4 && numberOfSides != 5);

   switch (numberOfSides) {
      case 3:
         displayTriangle(sideLength, character);
         break;
      case 4:
         displaySquare(sideLength, character);
         break;
      case 5:
         displayDiamond(sideLength, character);
         break;
   }

   return 0;

}

void displayTriangle(int side, char fillCharacter) {

   for (int i = 1; i <= side; i++) {

      for (int j = 1; j <= side - i; j++) {
         printf("%s", " ");         
      }

      for (int k = 1; k <= 2 * i - 1; k++) {
         printf("%c", fillCharacter);         
      }

      printf("%s", "\n");
      
   }

}

void displaySquare(int side, char fillCharacter) {

   for (int i = 1; i <= side; i++) {

      for (int j = 1; j <= side; j++) {
         printf(" %c", fillCharacter);         
      }

      printf("%s", "\n");
      
   }

}

void displayDiamond(int side, char fillCharacter) {

   for (int i = 1; i <= side; i++) {
      
      for(int j = 1; j <= side - i; j++) {
         printf("%s", " ");

      }

     for (int k = 1; k <= 2 * i - 1; k++) {
         printf("%c", fillCharacter);
      }
      
      printf("\n");

   }

   for (int i = 1; i <= side - 1; i++) {
      
      for(int j = 1; j <= i; j++) {
         printf("%s", " ");

      }

     for (int k = 1; k <= 2 * side - 1 - 2 * i; k++) {
         printf("%c", fillCharacter);
      }
      
      printf("\n");

   }

}