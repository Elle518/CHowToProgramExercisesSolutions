/*
       Program: Ch6_Ex6_10_SalesCommissions.c
   Descripción: This program determines how many of the salespeople earned
                salaries in a serie of ranges.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#define SIZE 9
#define COMMISSION 0.09

int main(void) {

   int salaries[SIZE] = {0};
   int sales;
   double salary;

   printf("Enter employee gross sales (-1 to end): ");
   scanf("%d", &sales);

   while (sales != -1) {

      salary = 200.0 + sales * COMMISSION;
      printf("Employee salary is $%0.2f\n", salary);

      if (salary >= 200 && salary < 1000) {
         salaries[(int)salary / 100 - 2]++;
      } else if (salary >= 1000) {
         salaries[8]++;
      }

      printf("\nEnter employee gross sales (-1 to end): ");
      scanf("%d", &sales);
   }

   printf("\nEmployees in the range:\n");
   printf("$200 - $299 -> %d\n", salaries[0]);
   printf("$300 - $399 -> %d\n", salaries[1]);
   printf("$400 - $499 -> %d\n", salaries[2]);
   printf("$500 - $599 -> %d\n", salaries[3]);
   printf("$600 - $699 -> %d\n", salaries[4]);
   printf("$700 - $799 -> %d\n", salaries[5]);
   printf("$800 - $899 -> %d\n", salaries[6]);
   printf("$900 - $999 -> %d\n", salaries[7]);
   printf("Over $1000 -> %d\n", salaries[8]);

   return 0;

}