/*
       Program: Ch5_Ex5_44_MimicMultiplicationRecursively2.c
   Descripción: This program mimics multiplication by adding up a, b times. We
                have removed the restriction of the second argument’s being
                nonnegative.
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

int multiplication(int a, int b) {

   if (b == 1) { // Base case
      return a;
   } else if (b > 1) { // Recursive step
      return a + multiplication(a, b - 1);
   } else {
      return -a + multiplication(-a, -b - 1);      
   }

}