/*
       Program: Ch5_Ex5_36_TowersOfHanoi.c
   Descripción: This program solves the Towers of Hanoi problem with recursion.
                Uses an algorithm that prints the precise sequence of
                disk-to-disk peg transfers.
                Moving n disks can be viewed in terms of moving only n – 1 disks
                as follows:

                  a) Move n – 1 disks from peg 1 to peg 2, using peg 3 as a
                  temporary holding area.
                  b) Move the last disk (the largest) from peg 1 to peg 3.
                  c) Move the n – 1 disks from peg 2 to peg 3, using peg 1 as a
                  temporary holding area.
                  
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void solveTowers(int disks, int startPeg, int holdingPeg, int endPeg);

int main(void) {

   int numberOfDisks;

   puts("Please, enter the number of disks: ");
   scanf("%d", &numberOfDisks);

   solveTowers(numberOfDisks, 1, 2, 3);

   return 0;

}

void solveTowers(int disks, int startPeg, int holdingPeg, int endPeg) {

   if (disks == 1) {
      printf("%d --> %d\n", startPeg, endPeg);
      return;
   }

   solveTowers(disks - 1, startPeg, endPeg, holdingPeg);

   printf("%d --> %d\n", startPeg, endPeg);

   solveTowers(disks - 1, holdingPeg, startPeg, endPeg);

}