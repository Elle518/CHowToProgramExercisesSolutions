/*
       Program: Ch5_Ex5_39_RecursiveGreatestCommonDivisor.c
   Descripción: This program uses a recursive function that returns the greatest
                common divisor of x and y. The gcd of x and y is defined
                recursively as follows: If y is equal to 0, then gcd(x, y) is x;
                otherwise gcd(x, y) is gcd(y, x % y), where % is the remainder
                operator.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

unsigned int gcd(unsigned int x, unsigned int y);

int main(void) {

   unsigned int number1, number2;

   printf("Please, enter two integers: \n");
   scanf("%u%u", &number1, &number2);

   printf("The g.c.d. of %u and %u is %u.\n", number1, number2, gcd(number1, number2));

   return 0;

}

unsigned int gcd(unsigned int x, unsigned int y) {

   if(y == 0) {
      return x;
   }

   return gcd(y, x % y);
}