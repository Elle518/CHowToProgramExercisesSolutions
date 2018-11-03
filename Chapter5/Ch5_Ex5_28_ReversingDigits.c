/*
       Program: Ch5_Ex5_28_ReversingDigits.c
   Descripción: This program uses a function that takes an integer value and
                returns the number with its digits reversed.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void reverseDigits(int num);

int main(void) {

   int number;

   puts("Please, enter an integer: ");
   scanf("%d", &number);

   reverseDigits(number);

   return 0;

}

void reverseDigits(int num) {
   
   int resto;

   while (num > 0) {
      resto = num % 10;
      num = num / 10;
      printf("%d", resto);
   }

   puts("");

}