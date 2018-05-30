/*
       Program: Ch3_Ex3_21_PreVsPostdecrementing.c
   Descripción: This program demonstrates the difference between predecrementing
                and postdecrementing using the decrement operator --.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int x = 5;
   int y = 5;

   // Predecrementing
   printf("%d\n", x);
   printf("%d\n", --x);
   printf("%d\n\n", x);

   // Postdecrementing
   printf("%d\n", y);
   printf("%d\n", y--);
   printf("%d\n", y);

   return 0;

}