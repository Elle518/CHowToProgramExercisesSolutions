/*
       Program: Ch4_Ex4_19_CalculatingSales.c
   Descripción: This program reads a series of pairs of numbers as follows:

                     a) Product number
                     b) Quantity sold for one week
                
                The program calculates and displays the total retail value of
                all products sold last week.

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int productNumber;
   int quantity;
   float total = 0;

   puts("Enter the product number and the quantity sold (-1 to end): ");
   scanf("%d", &productNumber);


   while (productNumber != -1) {
      
      scanf("%d", &quantity);

      switch (productNumber) {
         case 1:
            total = total + quantity * 2.98;
            break;
         case 2:
            total = total + quantity * 4.50;
            break;
         case 3:
            total = total + quantity * 9.98;
            break;
         case 4:
            total = total + quantity * 4.49;
            break;
         case 5:
            total = total + quantity * 6.87;
            break;
         default:
            printf("%s\n", "Not a product number.");
      }
      
      puts("Enter the product number and the quantity sold (-1 to end): ");
      scanf("%d", &productNumber);

   }

   printf("The total value of all products sold is %.2f.\n", total);

   return 0;

}