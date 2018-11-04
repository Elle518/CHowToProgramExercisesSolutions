/*
       Program: Ch5_Ex5_50_ComputerAssistedInstruction.c
   Descripción: This program helps an elementary school student learn
                multiplication.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int promptQuestion();

int main(void) {
   
   int studentAnswer, result;
   srand(time(NULL));

   printf("%s\n", "Enter -1 to exit");
   
   do {

      result = promptQuestion();
      scanf("%d", &studentAnswer);

      if (studentAnswer == result) {

         printf("%s\n", "Very good!");

      } else {

         if (studentAnswer == -1) {
            break;
         }

         do {

            printf("%s\n", "No. Please, try again.");
            scanf("%d", &studentAnswer);

         } while (studentAnswer != result && studentAnswer != -1);

         if (studentAnswer != -1) {
            printf("%s\n", "Very good!");
         }

      }

   } while (studentAnswer != -1);

   return 0;

}

int promptQuestion() {

   int number1, number2;

   number1 = 0 + rand() % 9;
   number2 = 0 + rand() % 9;

   printf("\nHow much is %d times %d?\n", number1, number2);

   return number1 * number2;

}