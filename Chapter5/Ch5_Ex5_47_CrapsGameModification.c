/*
       Program: Ch5_Ex5_47_CrapsGameModification.c
   Descripción: This program simulates the game of craps and allows wagering:
                A player rolls two dice. Each dice has six faces. These faces
                contain 1, 2, 3, 4, 5, and 6 spots. After the dice have come to
                rest, the sum of the spots on the two upward faces is calculated.
                If the sum is 7 or 11 on the first throw, the player wins. If
                the sum is 2, 3, or 12 on the first throw (called “craps”), the
                player loses (i.e., the “house” wins). If the sum is 4, 5, 6, 8,
                9, or 10 on the first throw, then that sum becomes the player’s
                “point". To win, you must continue rolling the dice until you
                “make your point”. The player loses by rolling a 7 before making
                the point.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void);
enum Status playCraps(void);
void chatter(void);

int main(void) {

   int wager;
   int bankBalance = 1000;

   do {
      printf("Please, enter your wager: ");
      scanf("%d", &wager);
   } while (wager > bankBalance || wager <= 0);

   if (WON == playCraps()) {
      bankBalance = bankBalance + wager;
      printf("Your new balance is %d.\n", bankBalance);
   } else {
      bankBalance = bankBalance - wager;
      printf("Your new balance is %d.\n", bankBalance);
      if (bankBalance == 0) {
         printf("%s\n", "Sorry. You busted!");
      }
   }

   return 0;

}

// Roll dice, calculate sum and display results
int rollDice(void) {

   int dice1 = 1 + rand() % 6;  // Pick random dice1 value
   int dice2 = 1 + rand() % 6;  // Pick random dice2 value

   printf("Player rolled %d + %d = %d\n", dice1, dice2, dice1 + dice2);

   return dice1 + dice2; // Return sum of dice

}

enum Status playCraps(void) {

   srand(time(NULL));
   int myPoint; // Player must make this point to win
   enum Status gameStatus; // Can contain CONTINUE, WON or LOST
   int sum = rollDice(); // First roll of the dice
   
   // Determine game status based on sum of dice
   switch(sum) {
      // Win on first roll
      case 7:
      case 11:
         gameStatus = WON;
         chatter();
         break;
      
      // Lose on first roll
      case 2:
      case 3:
      case 12:
         gameStatus = LOST;
         chatter();
         break;
      
      // Remember point
      default:
         gameStatus = CONTINUE; // Player should keep rolling
         chatter();
         myPoint = sum; // Remember the point
         printf("Point is %d\n", myPoint);
         break;
   }

   // While game not complete
   while (CONTINUE == gameStatus) { // Player should keep rolling
      chatter();
      sum = rollDice(); // Roll dice again
      // Determine game status
      if (sum == myPoint) { // Win by making point
         gameStatus = WON;
      } else {
         if (7 == sum) { // Lose by rolling 7
            gameStatus = LOST;
         }
      }
   }
   
   // Display won or lost message
   if (WON == gameStatus) { // Did player win? 
      puts("Player wins");
      return gameStatus;
   } else { // player lost
      puts("Player loses");
      return gameStatus;
   }

}

void chatter(void) {
   int chat = 1 + rand() % 6;
   
   switch (chat) {
      case 1:
         printf("%s\n", "Oh, you're going for broke, huh?");
         break;
      case 2:
         printf("%s\n", "Aw cmon, take a chance!");
         break;
      case 3:
         printf("%s\n", "You're up big. Now's the time to cash in your chips!");
         break;
      case 4:
         printf("%s\n", "Hey, I think this guy is going to break the bank!");
         break;
      case 5:
         printf("%s\n", "You're up big. Now's the time to cash in your chips!");
         break;
      case 6:
         printf("%s\n", "Bet it all! Bet it all!");
         break;
      default:
         printf("%s\n", "");
         break;
   }

}