/*
       Program: Ch3_Ex3_33_HollowSquareOfAsterisks.c
   Descripción: This program reads in the side of a square and then prints a
                hollow square. The program works for squares of all
                side sizes between 1 and 20.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int squareSide;
   int hollowHeight = 3;
   int hollowWeight = 3;

   puts("Please, enter the side size of the square (between 1 and 20):");
   scanf("%d", &squareSide);

   while (squareSide < 1 || squareSide > 20) {
      puts("Invalid number.");
      puts("Please, enter the side of the square (between 1 and 20):");
      scanf("%d", &squareSide);
   }

   while (hollowWeight - 2 <= squareSide) {
      printf("%s", "* ");
      hollowWeight++;
   }

   hollowWeight = 3;
   printf("\n");

   while (hollowHeight <= squareSide) {
   	printf("* ");
      while (hollowWeight <= squareSide) {
         printf("%s", "  ");
         hollowWeight++;
      }
      printf("*\n");
      hollowWeight = 3;
      hollowHeight++;
   }

   hollowHeight = 3;

   if (squareSide != 1) {
      while (hollowWeight - 2 <= squareSide) {
         printf("%s", "* ");
         hollowWeight++;
      }
      printf("\n");
   }

   return 0;

}