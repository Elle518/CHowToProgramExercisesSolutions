/*
       Program: Ch5_Ex5_18_EvenOrOdd.c
   Descripción: This program inputs a series of integers and passes them one at
                a time to function isEven, which uses the remainder operator to
                determine whether an integer is even.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int isEven(int num);

int main(void) {
   
   int number;
   int result;

   printf("Please, enter a serie of integers (-1 to end): \n");
   scanf("%d", &number);

   while (number != -1) {
      
      result = isEven(number);

      if (result == 1) {
         printf("%d is even.\n", number);
      } else {
         printf("%d is odd.\n", number);
      }

      scanf("%d", &number);

   } 

   return 0;

}

int isEven(int num) {
   if (num % 2 == 0) {
      return 1;
   } else {
      return 0;
   }
}