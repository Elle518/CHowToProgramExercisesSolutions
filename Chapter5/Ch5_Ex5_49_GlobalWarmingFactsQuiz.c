/*
       Program: Ch5_Ex5_49_GlobalWarmingFactsQuiz.c
   Descripción: This program administers a global warming facts quiz, calculates
                the number of correct answers (zero through five) and returns a
                message to the user.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

void printMessage(int n);
char question1();
char question2();
char question3();
char question4();
char question5();

int main(void) {
   
   int correctAnswers = 0;
   char answer;

   answer = question1();

   if(answer == 'A' || answer == 'a') {
      correctAnswers++;
   }

   answer = question2();

   if(answer == 'D' || answer == 'd') {
      correctAnswers++;
   }

   answer = question3();

   if(answer == 'B' || answer == 'b') {
      correctAnswers++;
   }

   answer = question4();

   if(answer == 'A' || answer == 'a') {
      correctAnswers++;
   }

   answer = question5();

   if(answer == 'C' || answer == 'c') {
      correctAnswers++;
   }

   printMessage(correctAnswers);

   return 0;

}

char question1() {

   char answer;

   printf("\n%s\n", "Question 1: Which country currently emits the most greenhouse gases?");
   printf("%s\n", "A. China");
   printf("%s\n", "B. The United Kingdom");
   printf("%s\n", "C. India");
   printf("%s\n", "D. The United States");

   scanf(" %c", &answer);

   return answer;

}

char question2() {

   char answer;

   printf("\n%s", "Question 2: Which of the following lightbulb types uses the least");
   printf("%s\n", " energy, and therefore results in fewer greenhouse gas emissions?");
   printf("%s\n", "A. Halogen");
   printf("%s\n", "B. LED");
   printf("%s\n", "C. Incandescent");
   printf("%s\n", "D. Compact fluorescent");

   scanf(" %c", &answer);

   return answer;
 
}

char question3() {

   char answer;

   printf("\n%s", "Question 3: How many human deaths per year does the ");
   printf("%s\n", "World Health Organization attribute to climate change?");
   printf("%s\n", "A. 10,500");
   printf("%s\n", "B. 150,000");
   printf("%s\n", "C. 1,500");
   printf("%s\n", "D. 1,500,000");

   scanf(" %c", &answer);

   return answer;

}

char question4() {
   
   char answer;

   printf("\n%s", "Question 4: How long does it take for carbon dioxide");
   printf("%s\n", " in the atmosphere to disperse?");
   printf("%s\n", "A. 100 years");
   printf("%s\n", "B. 1 year");
   printf("%s\n", "C. 10 years");
   printf("%s\n", "D. 50 years");

   scanf(" %c", &answer);

   return answer;
 
}

char question5() {

   char answer;

   printf("\n%s", "Question 5: Which Arctic animal do many scientists consider");
   printf("%s\n", " most vulnerable to extinction due to global warming?");
   printf("%s\n", "A. Toucans");
   printf("%s\n", "B. Tropical frog");
   printf("%s\n", "C. Narwhals");
   printf("%s\n", "D. Polar bears");

   scanf(" %c", &answer);

   return answer;
 
}

void printMessage(int n) {

   switch(n) {
      case 5:
         printf("%s\n", "Excellent!");
         break;
      case 4:
         printf("%s\n", "Very good!");
         break;
      default:
         printf("%s\n", "Time to brush up on your knowledge of global warming!");
         printf("%s\n", "For more information visit:");
         printf("\t%s\n", "- https://www.nationalgeographic.com/environment/global-warming/global-warming-quiz/");
         printf("\t%s\n", "- https://climate.nasa.gov/evidence/");
         break;         
   }

}