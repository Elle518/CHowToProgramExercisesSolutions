/*
       Program: Ch5_Ex5_32_GuessNumber.c
   Descripción: This program plays the game of “guess the number”.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pickNumber();

int main(void) {

   int guess;
   int number;
   char play;

   srand(time(NULL));

   do {
      
      number = pickNumber();

      puts("I have a number between 1 and 1000.");
      puts("Can you guess my number?");
      puts("Please, type your first guess: ");

      scanf("%d", &guess);

      while (guess != number) {
         
         if (guess >= number) {
            printf("%s\n", "Too high. Try again.");
            scanf("%d", &guess);
         } else if (guess <= number) {
            printf("%s\n", "Too low. Try again.");
            scanf("%d", &guess);
         }
      }

      printf("%s\n", "Excellent! You guessed the number!");
      printf("%s\n", "Would you like to play again (y or n)?");
      scanf(" %c", &play);
      
   } while (play != 'n');

   return 0;

}

int pickNumber() {

   return 1 + rand() % 1000;

}