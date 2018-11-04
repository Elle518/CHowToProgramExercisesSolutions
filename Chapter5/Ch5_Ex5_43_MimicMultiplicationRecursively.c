/*
       Program: Ch5_Ex5_43_MimicMultiplicationRecursively.c
   Descripción: This program mimics multiplication by adding up a, b times.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int multiplication(int a, int b);

int main() {
   
   int number1;
   int number2;

   printf("Please, enter two integers: ");
   scanf("%d%d", &number1, &number2);

   printf( "The result is %d.\n", multiplication(number1, number2));
   
   return 0;

}

// Parameter b must be a positive integer to prevent infinite recursion
int multiplication(int a, int b) {

   if (b == 1) { // Base case
      return a;
   } else { // Recursive step
      return a + multiplication(a, b - 1);
   }

}