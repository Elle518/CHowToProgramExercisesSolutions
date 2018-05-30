/*
       Program: Ch3_Ex3_18_SalesCommissionCalculator.c
   Descripción: This program inputs each salesperson’s gross sales for last week
                and calculates and displays that salesperson’s earnings. Process
                one salesperson's figures at a time.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main (void) {
   
   float salesInDollars;
   float salary;

   printf("%s", "Enter the sales in dollars (-1 to end): ");
   scanf("%f", &salesInDollars);

   while (salesInDollars != -1) {
      salary = 200 + (0.09 * salesInDollars);
      printf("Salary is: $%.2f", salary);

      printf("%s", "\nEnter the sales in dollars (-1 to end): ");
      scanf("%f", &salesInDollars);
   }

   return 0;

}