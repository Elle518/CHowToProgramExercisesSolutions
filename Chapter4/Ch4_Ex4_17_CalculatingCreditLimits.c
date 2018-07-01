/*
       Program: Ch4_Ex4_17_CalculatingCreditLimits.c
   Descripción: This program calculates and prints the new credit limit for each
                customer after a company has cut its customers’ credit limits in
                half. Also determines (and prints) which customers have current
                balances that exceed their new credit limits.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int accountNumber;
   float oldCreditLimit;
   float newCreditLimit;
   float currentBalance;
   
   puts("Enter the customer’s account number: ");
   scanf("%d", &accountNumber);

   puts("Enter the customer’s old credit limit:");
   scanf("%f", &oldCreditLimit);

   puts("Enter the customer’s current balance");
   scanf("%f", &currentBalance);

   newCreditLimit = oldCreditLimit / 2;
   printf("New credit limit for account %d is %.2f.\n", accountNumber, newCreditLimit);

   if (currentBalance > newCreditLimit) {
      puts("This account has exceeded its credit limit.");
   }

   return 0;

}