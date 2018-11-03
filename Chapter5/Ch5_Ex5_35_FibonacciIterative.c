/*
       Program: Ch5_Ex5_35_FibonacciIterative.c
   Descripción: This program uses a non-recursive function fibonacci(n) that
                calculates the nth Fibonacci number.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

unsigned long long int calculateFibonacciNumber(unsigned int n);

int main(void) {

   int nthNumber;

   puts("Please, enter the Fibonacci number you want to calculate: ");
   scanf("%d", &nthNumber);
   printf("fibonacci(%d) = %llu\n", nthNumber, calculateFibonacciNumber(nthNumber));

   return 0;

}

unsigned long long int calculateFibonacciNumber(unsigned int n) {

   unsigned long long int fibonacciNumber = 0;
   int aux1 = 0;
   int aux2 = 1; 

   for (int i = 1; i <= n; i++) {
      aux1 = fibonacciNumber + aux2;
      fibonacciNumber = aux2;
      aux2 = aux1;
   }

   return fibonacciNumber;
   
}