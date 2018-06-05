/*
       Program: Ch3_Ex3_40_MultiplesOf2InfiniteLoop.c
   Descripción: This program keeps printing the multiples of the integer 2,
                namely 2, 4, 8, 16, 32, 64, and so on. The loop does not
                terminate (i.e., creates an infinite loop).
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int multiple = 1;

   while (1) {
      multiple = multiple * 2;
      printf("%d\n", multiple);
   }

   return 0;

}