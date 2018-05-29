/*
       Program: Ch3_Ex3_7_Power.c
   Descripción: This program calculates x raised to the y power. The program
                should have a while iteration control statement.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   unsigned int x;
   unsigned int y;
   unsigned int i = 1;
   unsigned int power = 1;

   puts("Please, enter a base:");
   scanf("%u", &x);
   puts("Please, enter an exponent:");
   scanf("%u", &y);

   while (i <= y) {
      power *= x;
      i++;
   }

   printf("The power is %u.\n", power);

   return 0;

}