/*
       Program: Ch5_Ex5_42_RecursiveMainCharacter.c
   Descripción: This program inputs a character and recursively calls main()
                until the EOF character is entered. Every character entered is
                then output in reverse order.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int c;

   if ((c = getchar()) != EOF) {
      // If we exchange this two lines every character entered is output in
      // the same order
      main();
      printf("%c", c);
   }

   return 0;

}