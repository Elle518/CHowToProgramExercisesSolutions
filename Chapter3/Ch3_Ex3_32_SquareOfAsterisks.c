/*
       Program: Ch3_Ex3_32_SquareOfAsterisks.c
   Descripción: This program reads in the side of a square and then prints that
                square out of asterisks. The program works for squares of all
                side sizes between 1 and 20.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int squareSide;
   int height = 1;
   int weight = 1;

   puts("Please, enter the side size of the square (between 1 and 20):");
   scanf("%d", &squareSide);

   while (squareSide < 1 || squareSide > 20) {
      puts("Invalid number.");
      puts("Please, enter the side of the square (between 1 and 20):");
      scanf("%d", &squareSide);
   }

   while (height <= squareSide) {
      while (weight <= squareSide) {
         printf("%s", "* ");
         weight++;
      }
      printf("\n");
      weight = 1;
      height++;
   }

   return 0;

}