/*
       Program: Ch5_Ex5_17_Multiples.c
   Descripción: This program inputs a series of pairs of integers and determines
                whether the second integer is a multiple of the first.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int isMultiple(int num1, int num2);

int main(void) {
   
   int number1;
   int number2;
   int result;

   printf("Please, enter a pair of integers (-1 to end): \n");
   scanf("%d", &number1);

   while (number1 != -1) {
      
      scanf("%d", &number2);
      result = isMultiple(number1, number2);

      if (result == 1) {
         printf("%d is multiple of %d.\n", number2, number1);
      } else {
         printf("%d is not multiple of %d.\n", number2, number1);
      }

      printf("Please, enter a pair of integers (-1 to end): \n");
      scanf("%d", &number1);

   } 

   return 0;

}

int isMultiple(int num1, int num2) {
   if (num2 % num1 == 0) {
      return 1;
   } else {
      return 0;
   }
}

