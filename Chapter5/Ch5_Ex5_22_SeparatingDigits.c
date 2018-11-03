/*
       Program: Ch5_Ex5_22_SeparatingDigits.c
   Descripción: This program separates the digits of an integer.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void separateDigits(int num);

int main(void) {

   int number;

   puts("Please, enter an integer between 1 and 32767: ");
   scanf("%d", &number);

   separateDigits(number);

   return 0;

}

void separateDigits(int num) {

   int resto = num;
   int counter = 0;
   int divider = 1;
   int aux = num;

   while (aux > 0) {
      aux = aux / 10;
      counter++;
   }

   for (int i = 1; i < counter; i++) {
      divider = divider * 10;
   }

   for (int i = 1; i <= counter; i++) {
      num = resto / divider;
      resto = resto % divider;
      divider = divider / 10;
      printf("%d ", num);
   } 

   printf("%s", "\n");

}