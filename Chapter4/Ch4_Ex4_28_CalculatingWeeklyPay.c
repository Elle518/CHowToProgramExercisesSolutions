/*
       Program: Ch4_Ex4_28_CalculatingWeeklyPay.c
   Descripción: This program computes the weekly pay for each employee. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int paycode;
   int piecesProduced;
   float pay;
   float hoursWorked;
   float weeklySales;
   float managersWeeklySalary = 10000.0;
   float fixedHourlyWage = 20.0;
   float amountForPiece = 2.5;

   puts("Please, enter the paycode (-1 to exit): ");
   scanf("%d", &paycode);

   while(paycode != -1) {

      switch(paycode) {

         case 1:
            pay = managersWeeklySalary;
            printf("The manager weekly pay is %.2f$.\n", pay);
            break;

         case 2:
            puts("Enter the hours worked:");
            scanf("%f", &hoursWorked);
           
            if (hoursWorked <= 40) {
               pay = hoursWorked * fixedHourlyWage;
            } else {
               pay = hoursWorked * fixedHourlyWage +  (hoursWorked - 40) * 1.5 * fixedHourlyWage;
            }

            printf("The hourly worker weekly pay is %.2f$.\n", pay);
            break;

         case 3:
            puts("Enter the gross weekly sales: ");
            scanf("%f", &weeklySales);
            pay = 250 + 0.57 * weeklySales;
            printf("The commission worker weekly pay is %.2f$.\n", pay);
            break;

         case 4:
            puts("Enter the number of pieces produced: ");
            scanf("%d", &piecesProduced);
            pay = amountForPiece * piecesProduced;
            printf("The pieceworker weekly pay %.2f$.\n", pay);
            break;

         default:
            puts("Invalid paycode.");
            break;

      }

      puts("Please, enter the paycode (-1 to exit): ");
      scanf("%d", &paycode);
      
   }

   return 0;

}