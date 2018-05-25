/*
       Program: Ch2_Ex2_32_BodyMassIndex.c
   Descripción: This program reads the user’s weight in kilograms and height in
                centimeters, then calculates and displays the user’s body mass
                index. Also, the application should display the following
                information from the Department of Health and Human Services /
                National Institutes of Health so the user can evaluate his/her BMI:
                
                  BMI VALUES
                  Underweight: less than 18.5
                  Normal: between 18.5 and 24.9
                  Overweight: between 25 and 29.9
                  Obese: 30 or greater

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int heightInCentimeters;
   int weightInKilograms;
   int BMI;

   puts("Please, enter your height in centimeters:");
   scanf("%d", &heightInCentimeters);

   puts("Please, enter your weight in kilograms:");
   scanf("%d", &weightInKilograms);

   BMI = (weightInKilograms * 10000) / (heightInCentimeters * heightInCentimeters);

   printf("Your body mass index (BMI) is %d.\n\n", BMI);

   puts("BMI VALUES");
   puts("Underweight: less than 18.5");
   puts("Normal: between 18.5 and 24.9");
   puts("Overweight: between 25 and 29.9");
   puts("Obese: 30 or greater");

   return 0;

}
