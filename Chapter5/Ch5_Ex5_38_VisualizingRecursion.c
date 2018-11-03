/*
       Program: Ch5_Ex5_38_VisualizingRecursion.c
   Descripción: This program uses the factorial function to print its local
                variable and recursive call parameter. For each recursive call,
                displays the outputs on a separate line and adds a level of
                indentation.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void) {

   // Calculates and prints the factorials of the integers 0 – 21
   for (unsigned int i = 0; i <= 21; ++i) {
      printf("%u! = %llu\n", i, factorial(i));
   }

   return 0;

}

unsigned long long int factorial(unsigned int number) {

   if (number <= 1) {    // Base case
      if (number == 0) {
         printf("number - %d\n", number);         
      } else {
         printf("number -  %d\n", number);   
      }

      return 1;

   } else {             // Recursive step
     
      printf("number - ");

      for (int i = 1; i <= number; i++) {
         printf("%s", " ");
      }

      printf("%d\n", number);
      return (number * factorial(number - 1));

   }

}