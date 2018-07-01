/*
       Program: Ch4_Ex4_15_CalculatingCompoundInterest.c
   Descripción: This program computes compound interest for interest rates of
                5%, 6%, 7%, 8%, 9%, and 10%.
                A person invests $1000.00 in a savings account yielding certain
                interest. Assuming that all interest is left on deposit in the
                account, the program calculates and prints the amount of money
                in the account at the end of each year for 10 years. Uses the
                following formula for determining these amounts:

                                 a = p(1 + r)^n

                where
                  p is the original amount invested (i.e., the principal)
                  r is the annual interest rate (for example, .05 for 5%)
                  n is the number of years
                  a is the amount on deposit at the end of the nth year.

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>  

int main(void) {

   double principal = 1000.0;
   int rate;

   for (rate = 5; rate <= 10; rate++) {

      printf("\nInterest rate of %d%%\n", rate);
      printf("%4s%21s\n", "Year", "Amount on deposit");

      for (unsigned int year = 1; year <= 10; ++year) {

         double amount = principal * pow(1.0 + (double)rate/100, year);
         printf("%4u%21.2f\n", year, amount);

      }

   }

   return 0;

} 