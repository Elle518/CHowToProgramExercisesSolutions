/*
       Program: Ch5_Ex5_31_CoinTossing.c
   Descripción: This program simulates coin tossing. The program toss the coin
                100 times, count the number of times each side of the coin
                appears and prints the results.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip();

int main(void) {

   int count = 0;

   srand(time(NULL));

   for (int i = 1; i <= 100; i++) {
      
      if(flip()) {
         printf("%s\n", "Heads");
         count++;
      } else {
         printf("%s\n", "Tails");
      }

   }

   printf("Heads: %d\n", count);
   printf("Tails: %d\n", 100 - count);

   return 0;

}

int flip() {

   return rand() % 2;

}