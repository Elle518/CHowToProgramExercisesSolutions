/*
       Program: Ch5_Ex5_33_GuessNumberModification.c
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
   int count = 0;
   char play;

   srand(time(NULL));

   do {
      
      number = pickNumber();

      puts("I have a number between 1 and 1000.");
      puts("Can you guess my number?");
      puts("Please, type your first guess: ");

      scanf("%d", &guess);
      count++;

      while (guess != number) {
         
         if (guess >= number) {
            printf("%s\n", "Too high. Try again.");
            scanf("%d", &guess);
            count++;
         } else if (guess <= number) {
            printf("%s\n", "Too low. Try again.");
            scanf("%d", &guess);
            count++;
         }
      }

      printf("%s\n", "Excellent! You guessed the number!");

      if (count < 10) {
         printf("%s\n", "Either you know the secret or you got lucky!");
      } else if (count == 10) {
         printf("%s\n", "Ahah! You know the secret!");
      } else {
         printf("%s\n", "You should be able to do better!");
      }

      printf("%s\n", "Would you like to play again (y or n)?");
      scanf(" %c", &play);
      count = 0;
      
   } while (play != 'n');

   return 0;

}

int pickNumber() {

   return 1 + rand() % 1000;

}