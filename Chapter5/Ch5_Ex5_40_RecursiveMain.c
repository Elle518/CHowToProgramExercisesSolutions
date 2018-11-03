/*
       Program: Ch5_Ex5_40_RecursiveMain.c
   Descripción: This program contains a function main and includes a static
                local variable count initialized to 1. Prints and postincrements
                the value of count each time main is called.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   static int count = 1;

   printf("%d\n", count);
   count++;

   main();

   return 0;

}