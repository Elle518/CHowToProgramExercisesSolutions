/*
       Program: Ch6_Ex6_20_GameOfCraps.c
   Descripción: This program runs 1000 games of craps (without human
                intervention). 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
int rollDice(void);

int main(void) {

   enum Status gameStatus;
   int myPoint;
   int sum;
   int rollCounter;
   int length = 0;
   int totalWins = 0;
   int totalLosses = 0;
   int wins[22] = {0};
   int losses[22] = {0};
   
   srand(time(NULL));
   
   for (int i = 1; i <= 1000; i++) {

      sum = rollDice();
      rollCounter = 1;

      switch(sum) {

        // Win on first roll
         case 7:
         case 11:
            gameStatus = WON;
            break;

         // Lose on first roll
         case 2:
         case 3:
         case 12:
            gameStatus = LOST;
            break;
      
         // Player should keep rolling
         default:
            gameStatus = CONTINUE;
            myPoint = sum; // Remember the point
            //printf("Point is %d\n", myPoint);
            break;
      }

      // While game not complete 
      while (CONTINUE == gameStatus) {

         sum = rollDice();
         rollCounter++;
      
         // Determine game status
         if (sum == myPoint) { // Win by making point
            gameStatus = WON;
         } else {
            if (7 == sum) { // Lose by rolling 7
               gameStatus = LOST;
            }
         }

      }

      if (rollCounter > 21) {
         rollCounter = 21;
      } 

      if (WON == gameStatus) {
         wins[rollCounter]++;
         totalWins++;
      } else {
         losses[rollCounter]++;
         totalLosses++;
      }

   }

   puts("Games won or lost after the 20th roll\n"
        "are displayed as the 21st roll.\n");
   
   // Display number of games won and lost for each number of rolls
   for (int j = 1; j <= 21; j++) {
      printf("%3d games won and %3d games lost on roll %d.\n", wins[j], losses[j], j);
   }
   
   // Calculate chances of winning
   printf("\nThe chances of winning are %d/%d = %.2f%%\n",
          totalWins, totalWins + totalLosses,
          100.0 * totalWins / (totalWins + totalLosses));

   // Calculate average length of game
   for (int h = 1; h <= 21; h++) {
      length += wins[h] * h + losses[h] * h;
   }

   printf("The average game length is %.2f rolls.\n", length / 1000.0);

   return 0;

}

int rollDice(void) {
   
   int dice1 = 1 + rand() % 6;
   int dice2 = 1 + rand()% 6;

   printf("Player rolled %d + %d = %d\n", dice1, dice2, dice1 + dice2);

   return dice1 + dice2;

}