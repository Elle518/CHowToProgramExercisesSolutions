/*
       Program: Ch4_Ex4_41_FairTax.c
   Descripción: This program prompts the user to enter expenses in various
                categories (e.g., housing, food, clothing, transportation,
                education, health care, vacations), then prints the estimated
                FairTax that person would pay.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   float totalExpenses = 0;
   float fairTax;
   float housingExpenses;
   float foodExpenses;
   float clothingExpenses;
   float transportationExpenses;
   float educationExpenses;
   float healthCareExpenses;
   float vacationsExpenses;

   puts("Please, enter your housing expenses: ");
   scanf("%f", &housingExpenses);
   
   puts("Please, enter your food expenses: ");
   scanf("%f", &foodExpenses);
   
   puts("Please, enter your clothing expenses: ");
   scanf("%f", &clothingExpenses);
   
   puts("Please, enter your transportation expenses: ");
   scanf("%f", &transportationExpenses);
   
   puts("Please, enter your education expenses: ");
   scanf("%f", &educationExpenses);
   
   puts("Please, enter your health care expenses: ");
   scanf("%f", &healthCareExpenses);
   
   puts("Please, enter your vacations expenses: ");
   scanf("%f", &vacationsExpenses);

   totalExpenses = housingExpenses + foodExpenses + clothingExpenses + transportationExpenses
                   + educationExpenses + healthCareExpenses + vacationsExpenses;
   
   fairTax = 0.23 * totalExpenses;

   printf("The estimated FairTax you would pay is %.2f.\n", fairTax);

   return 0;

}