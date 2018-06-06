/*
       Program: Ch3_Ex3_47_TargetHeartRateCalculator.c
   Descripción: This program reads the user’s birthday and the current day (each
                consisting of the month, day and year) and calculates and
                displays the person’s age (in years), the person’s maximum heart
                rate and the person’s target-heart-rate range.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int birthdayDay, birthdayMonth, birthdayYear;
   int currentDay, currentMonth, currentYear;
   int age;
   int maximumHeartRate;

   puts("Please, enter your date of birthday (i.e. 9 27 1981):");
   scanf("%d%d%d", &birthdayMonth, &birthdayDay, &birthdayYear);

   puts("Please, enter the current date (i.e. 11 21 2018):");
   scanf("%d%d%d", &currentMonth, &currentDay, &currentYear);

   age = currentYear - birthdayYear;

   if (birthdayMonth > currentMonth) {
      age--;
   } else if (birthdayMonth == currentMonth) {
      if (birthdayDay > currentDay) {
         age--;
      }
   }

   printf("Your age is %d years.\n", age);

   maximumHeartRate = 220 - age;

   printf("Your maximum heart rate is %d beats per minute.\n", maximumHeartRate);

   printf("Your target-heart-rate range is between %.0f and %.0f beats per minute.\n",
          maximumHeartRate * 0.5, maximumHeartRate * 0.85);

   return 0;

}