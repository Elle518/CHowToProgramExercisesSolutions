/*
       Program: Ch5_Ex5_48_FibonacciRecursive.c
   Descripción: This program shows two recursive approaches, including the one
                that uses only so-called “tail recursion”, to calculate
                recursively the nth Fibonacci number. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);
unsigned long long int fibonacciTail(unsigned int n, int a, int b);

int main(void) {

   unsigned int number;
   unsigned long long int result;
   unsigned long long int resultTail;


   printf("%s", "Please, enter an integer: ");
   scanf("%u", &number);

   // Calculate fibonacci value using recursion
   result = fibonacci(number);

   // Calculate fibonacci value using tail recursion
   resultTail = fibonacciTail(number, 0, 1);

   printf("Fibonacci recursion(%u) = %llu\n", number, result);
   printf("Fibonacci tail recursion(%u) = %llu\n", number, resultTail);

   return 0;
   
}

// Recursive definition of function fibonacci
unsigned long long int fibonacci(unsigned int n) {

   // Base case
   if (n == 0 || n == 1) {
   return n;
   } else { // Recursive step
   return fibonacci(n - 1) + fibonacci(n - 2);
   }

}

// Tail recursive definition of function fibonacci
unsigned long long int fibonacciTail(unsigned int n, int a, int b) {

   if (n == 0) {
      return a;
   } else {
      return fibonacciTail(n - 1, b, a + b);
   }

}