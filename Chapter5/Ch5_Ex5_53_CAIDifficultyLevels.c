/*
       Program: Ch5_Ex5_53_CAIDifficultyLevels.c
   Descripción: This program helps an elementary school student learn
                multiplication and reduces student fatigue by varying the
                computer’s responses to hold the student’s attention. Also
                monitors the student’s performance over a period of time and
                allows the user to enter a difficulty level.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int promptQuestion(int l);
void computerResponseCorrectAnswer();
void computerResponseWrongAnswer();

int main(void) {
   
   int studentAnswer, result, level;
   int counter, correctAnswers, wrongAnswers;
   srand(time(NULL));

   counter = 10;
   correctAnswers = 0;
   wrongAnswers = 0;

   printf("%s\n", "Please, enter level (from 1 to 4)");
   scanf("%d", &level);

   do {

      result = promptQuestion(level);
      scanf("%d", &studentAnswer);

      if (studentAnswer == result) {

         computerResponseCorrectAnswer();
         correctAnswers++;
         counter--;

      } else {

         if (counter <= 1) {
            break;
         }

         do {

            computerResponseWrongAnswer();
            wrongAnswers++;
            counter--;
            scanf("%d", &studentAnswer);

         } while (studentAnswer != result && counter >= 1);

         if (counter >= 1) {
            correctAnswers++;
            computerResponseCorrectAnswer();
            counter--;
         }

      }

   } while (counter >= 1);

   if((float)correctAnswers / (correctAnswers + wrongAnswers) > 0.75) {
      printf("\n%s\n", "Congratulations, you are ready to go to the next level!");
   } else {
      printf("\n%s\n", "Please ask your teacher for extra help.");
   }

   return 0;

}

int promptQuestion(int l) {

   int number1, number2, max;

   max = 1;

   for (int i = 1; i <= l; i++){
      max = max * 10;
   }

   number1 = 0 + rand() % (max - 1);
   number2 = 0 + rand() % (max - 1);

   printf("\nHow much is %d times %d?\n", number1, number2);

   return number1 * number2;

}

void computerResponseCorrectAnswer() {

   int response;

   response = 1 + rand() % 4;

   switch (response) {
      case 1:
         printf("%s\n", "Very good!");
         break;
      case 2:
         printf("%s\n", "Excellent!");
         break;
      case 3:
         printf("%s\n", "Nice work!");
         break;
      case 4:
         printf("%s\n", "Keep up the good work!");
         break;
   }

}
void computerResponseWrongAnswer()  {

   int response;

   response = 1 + rand() % 4;

   switch (response) {
      case 1:
         printf("%s\n", "No. Please, try again.");
         break;
      case 2:
         printf("%s\n", "Wrong. Try once more.");
         break;
      case 3:
         printf("%s\n", "Don't give up!");
         break;
      case 4:
         printf("%s\n", "No. Keep trying.");
         break;
   }
   
}