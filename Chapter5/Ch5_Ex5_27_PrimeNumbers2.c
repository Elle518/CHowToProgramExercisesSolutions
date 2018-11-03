/*
       Program: Ch5_Ex5_27_PrimeNumbers2.c
   Descripción: This program uses a function that determines and prints all the
                prime numbers between 1 and 10.000.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

int isPrime(int number);

int main (void) {

   int count = 0;
   
   puts("The prime numbers between 1 and 10000 are:");

   for (int number = 1; number <= 10000; number++) {
      
      if (isPrime(number)) {
         count++;
         printf("%5d", number);

         if (count % 10 == 0) {
            puts("");
         }
      }

   }

   return 0;

}

int isPrime(int number) {

   for (int i = 1; i <= (int) sqrt(number); i++) {
      
      if (number % i == 0 && i != 1) {
         return 0;
      }
      
   }

   return 1;
}