/*
       Program: Ch3_Ex3_25_TabularOutput2.c
   Descripción: This program utilizes looping to produce a table of numbers.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int number = 3;

   printf("%s\n\n", "A\tA+2\tA+4\tA+6");

   while (number <= 15) {
      printf("%d\t%d\t%d\t%d\t\n", number, number +2, number + 4, number + 6);
      number += 3;
   }

   return 0;

}