/*
       Program: Ch4_Ex4_37_RemoveContinueStatement.c
   Descripción: This program uses a technique to remove the continue statement
                from the program.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   for (int x = 1; x <= 10; ++x) {

      if (x == 5) {   
         x++;
      }

      printf("%d ", x);
   } 
   
   puts("\nUsed continue to skip printing the value 5");

   return 0;
}