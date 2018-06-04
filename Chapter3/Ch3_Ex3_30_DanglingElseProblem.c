/*
       Program: Ch3_Ex3_30_DanglingElseProblem.c
   Descripción: This program determines the output for each of the following 
                pieces of code when x is 9 and y is 11, and when x is 11 and y
                is 9. The compiler always associates an else with the previous
                if unless told to do otherwise by the placement of braces {}.
                Because, on first glance, we may not be sure which if an else
                matches, this is referred to as the “dangling else” problem. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   // a)
   // if(x < 10)
   // if (y > 10)
   // printf("*****\n");
   // else
   // printf("#####\n");
   // printf("$$$$$\n");

   int x = 9;
   int y = 11;

   if(x < 10)
      if (y > 10)
         printf("*****\n");
      else
         printf("#####\n");
   printf("$$$$$\n");

   printf("\n");

   x = 11;
   y = 9;

   if(x < 10)
      if (y > 10)
         printf("*****\n");
      else
         printf("#####\n");
   printf("$$$$$\n");

   printf("\n");

   // b)
   // if (x < 10) {
   // if (y > 10)
   // puts("*****");
   // }
   // else {
   // puts("#####");
   // puts("$$$$$");
   // }

   x = 9;
   y = 11;

   if (x < 10) {
      if (y > 10)
         puts("*****");
   } else {
      puts("#####");
      puts("$$$$$");
   }

   printf("\n");

   x = 11;
   y = 9;

   if (x < 10) {
      if (y > 10)
         puts("*****");
   } else {
      puts("#####");
      puts("$$$$$");
   }

   return 0;
   
}