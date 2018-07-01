/*
       Program: Ch4_Ex4_35_RemoveBreakStatement.c
   Descripción: This program uses a technique to remove the break statement from
                the program.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int x;
   int breakCondition = 1;

   for (x = 1; x <= 10 && breakCondition == 1; x++) {

      if (x == 4) {
         breakCondition = -1;
      } 

      printf("%d ", x); 
   } 
   
   printf("\nBroke out of loop at x == %d\n", x);

   return 0;
   
} 