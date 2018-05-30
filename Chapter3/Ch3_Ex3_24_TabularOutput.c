/*
       Program: Ch3_Ex3_24_TabularOutput.c
   Descripción: This program uses looping to print a table of multiples. Uses
                the tab escape sequence, \t, in the printf statement to separate
                the columns with tabs.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int number = 1;

   printf("%s\n\n", "N\t10*N\t100*N\t1000*N");

   while (number <= 10) {
      printf("%d\t%d\t%d\t%d\t\n", number, number * 10, number * 100, number * 1000);
      number++;
   }

   return 0;

}