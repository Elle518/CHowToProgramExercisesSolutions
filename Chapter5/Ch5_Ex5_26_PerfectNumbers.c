/*
       Program: Ch5_Ex5_26_PerfectNumbers.c
   Descripción: This program uses a function that determines whether parameter
                number is a perfect number and prints all the perfect numbers
                between 1 and 1000. Print the factors of each perfect number to
                confirm that the number is indeed perfect.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

// An integer number is said to be a perfect number
// if its factors, including 1 (but not the number itself),
// sum to the number.

#include <stdio.h>

int isPerfect(int num);

int main(void) {

   int aux = 0;

   for (int number = 1; number <= 1000; number++) {
   
      if (isPerfect(number)) {
         printf("%d is a perfect number\n", number);
         printf("%s", "Its factors are");

         for (int i = 1; i < number; i++) {
            if (number % i == 0) {
               aux = aux + i;
               printf(" %d", i);
            }  
         }

         puts("");
      } else {
         printf("%d is not a perfect number\n", number);      
      }
   }

   return 0;

}

int isPerfect(int num) {
   int aux = 0;
   for (int i = 1; i < num; i++) {
      if (num % i == 0) {
         aux = aux + i;
      }
   }

   if (num == aux) {
    return 1;
   } else {
      return 0;    
   }
}