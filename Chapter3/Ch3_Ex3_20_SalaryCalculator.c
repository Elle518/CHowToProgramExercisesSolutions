/*
       Program: Ch3_Ex3_20_SalaryCalculator.c
   Descripción: This program determines the gross pay for each of several
                employees. The company pays “straight time” for the first 40
                hours worked by each employee and pays “time-and-a-half” for
                all hours worked in excess of 40 hours. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   float hoursWorked;
   float hourlyRate;
   float salary;

   printf("%s", "Enter number of hours worked (-1 to end): ");
   scanf("%f", &hoursWorked);

   while (hoursWorked != -1) {
      printf("%s", "Enter hourly rate of the worker ($00.00): ");
      scanf("%f", &hourlyRate);

      if (hoursWorked <= 40) {
         salary = hoursWorked * hourlyRate;
      } else {
         salary = 40 * hourlyRate + (hoursWorked - 40) * 1.5 * hourlyRate;
      }

      printf("Salary is $%.2f\n", salary);

      printf("%s", "\nEnter number of hours worked (-1 to end): ");
      scanf("%f", &hoursWorked);
   }

   return 0;

}