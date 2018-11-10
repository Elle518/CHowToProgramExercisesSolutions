/*
       Program: Ch6_Ex6_17_SumRecursively.c
   Descripción: This program recursively sums the elements in a.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#define SIZE 10

int sumRecursively(const int b[], size_t p);

int main(void) {
   
   int x;
   int a[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

   x = sumRecursively(a, SIZE);

   printf("Result is %d\n", x);

   return 0;
}

int sumRecursively(const int b[], size_t p) {

   // Base case
   if (1 == p) {
      return b[0];
   } else { // Recursion step
      return b[p - 1] + sumRecursively(b, p - 1);
   }

}