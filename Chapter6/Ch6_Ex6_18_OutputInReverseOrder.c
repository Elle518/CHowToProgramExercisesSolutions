/*
       Program: Ch6_Ex6_18_OutputInReverseOrder.c
   Descripción: This program recursively outputs the values of a in reverse
                order.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#define SIZE 10


void outputInReverseOrder(const int b[], size_t startIndex, size_t size);

int main(void) {

   int a[SIZE] = { 8, 3, 1, 2, 6, 0, 9, 7, 4, 5 };
   
   puts("Answer is:");

   outputInReverseOrder(a, 0, SIZE);

   puts("");

   return 0;

}

void outputInReverseOrder(const int b[], size_t startIndex, size_t size) {

   if (startIndex < size) {
      outputInReverseOrder(b, startIndex + 1, size);
      printf("%d ", b[startIndex]);
   }

}