/*
       Program: Ch5_Ex5_30_QualityPoints.c
   Descripción: This program uses a function that inputs a student’s average and
                returns 4 it’s 90–100, 3 if it’s 80–89, 2 if it’s 70–79, 1 if
                it’s 60–69, and 0 if the average is lower than 60.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int toQualityPoints(int average);

int main(void) {
   
   int studentsAverage;

   puts("Please, enter the student's average: ");
   scanf("%d", &studentsAverage);

   printf("The quality points for student’s grades are %d.\n", toQualityPoints(studentsAverage));

   return 0;

}

int toQualityPoints(int average) {

   int points = 0;

   if (average <= 100 && average >= 90) {
      points = 4;
   } else if (average <= 89 && average >= 80) {
      points = 3;
   } else if (average <= 79 && average >= 70) {
      points = 2;
   } else if (average <= 69 && average >= 60) {
      points = 1;
   } else if (average < 60) {
      points = 0;
   }

   return points;
   
}