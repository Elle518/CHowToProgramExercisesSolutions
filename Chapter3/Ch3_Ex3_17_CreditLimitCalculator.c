/*
       Program: Ch3_Ex3_17_CreditLimitCalculator.c
   Descripción: This program determines whether a department store customer has
                exceeded the credit limit on a charge account.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int accountNumber;
   float beginningBalance;
   float totalCharges;
   float totalCredits;
   float creditLimit;
   float newBalance = 0;

   printf("%s", "Enter account number (-1 to end): ");
   scanf("%d", &accountNumber);

   while (accountNumber != -1) {
      printf("%s", "Enter beginning balance: ");
      scanf("%f", &beginningBalance);

      printf("%s", "Enter total charges: ");
      scanf("%f", &totalCharges);

      printf("%s", "Enter total credits: ");
      scanf("%f", &totalCredits);

      printf("%s", "Enter credit limit: ");
      scanf("%f", &creditLimit);

      newBalance = beginningBalance + totalCharges - totalCredits;

      if (newBalance > creditLimit) {
         printf("Account:      %d\n", accountNumber);
         printf("Credit limit: %.2f\n", creditLimit);
         printf("Balance:      %.2f\n", newBalance);
         printf("%s", "Credit limit exceeded.\n");
      }

      printf("%s", "\nEnter account number (-1 to end): ");
      scanf("%d", &accountNumber);
   }

   return 0;

}