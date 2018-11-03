/*
       Program: Ch5_Ex5_29_GreatestCommonDivisor.c
   Descripción: This program uses a function that returns the greatest common
                divisor of two integers.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int gcd(int num1, int num2);

int main(void) {
   
   int number1, number2;

   puts("Please, enter two integers: ");
   scanf("%d%d", &number1, &number2);

   printf("The greatest common divisor of %d and %d is %d.\n", number1, number2, gcd(number1, number2));

   return 0;

}

int gcd(int num1, int num2) {
   
   int min;
   int gcd = 1;

   if (num1 > num2) {
      min = num2;
   } else {
      min = num1;
   }

   for (int i = 1; i <= min; i++) {
      if (num1 % i == 0 && num2 % i == 0) {
         gcd = i;
         printf("gcd %d\n", gcd);
      }
   }

   return gcd;

}