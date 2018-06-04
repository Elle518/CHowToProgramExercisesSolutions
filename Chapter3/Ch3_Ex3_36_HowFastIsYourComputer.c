/*
       Program: Ch3_Ex3_36_HowFastIsYourComputer.c
   Descripción: This program uses a while loop that counts from 1 to
                1,000,000,000 by 1s. Every time the count reaches a multiple of
                100,000,000, prints that number on the screen. Use your watch
                to time how long each 100 million iterations of the loop takes.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int counter = 0;
   
   while (counter < 1000000000) {
      counter = counter + 1;
      if (counter % 100000000 == 0) {
         printf("%d\n", counter);
      }
   }

   return 0;

}