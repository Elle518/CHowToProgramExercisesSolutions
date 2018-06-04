/*
       Program: Ch3_Ex3_34_PalindromeTester.c
   Descripción: This program reads in a five-digit integer and determines
                whether or not it’s a palindrome. Uses the division and
                remainder operators to separate the number into its individual
                digits.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int number;
   int firstDigit;
   int secondDigit;
   int fourthDigit;
   int fifthDigit;

   puts("Please, enter a five-digit integer:");
   scanf("%d", &number);

   firstDigit = number / 10000;
   secondDigit = (number % 10000) / 1000;
   fourthDigit = (number % 10000 % 1000 % 100) / 10;
   fifthDigit = (number % 10000 % 1000 % 100 % 10) / 1;

   if (firstDigit == fifthDigit && secondDigit == fourthDigit) {
      printf("%d is a palindrome.\n", number);
   } else {
      printf("%d is a not palindrome.\n", number);
   }
   
   return 0;
}