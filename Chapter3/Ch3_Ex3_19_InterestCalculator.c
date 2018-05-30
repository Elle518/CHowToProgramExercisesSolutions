/*
       Program: Ch3_Ex3_19_InterestCalculator.c
   Descripción: This program inputs principal, rate and days for several loans,
                and calculates and displays the simple interest for each loan.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   float loan;
   float interestRate;
   float interestCharge;
   int days;


   printf("%s", "Enter loan principal (-1 to end): ");
   scanf("%f", &loan);

   while (loan != -1) {
      printf("%s", "Enter interest rate: ");
      scanf("%f", &interestRate);

      printf("%s", "Enter term of the loan in days: ");
      scanf("%d", &days);

      interestCharge = (loan * interestRate * days) / 365;
      printf("The interest charge is $%.2f\n", interestCharge);

      printf("%s", "\nEnter loan principal (-1 to end): ");
      scanf("%f", &loan);
   }

   return 0;

}