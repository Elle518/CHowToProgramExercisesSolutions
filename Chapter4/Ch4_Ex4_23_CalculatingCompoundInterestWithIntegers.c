/*
       Program: Ch4_Ex4_23_CalculatingCompoundInterestWithIntegers.c
   Descripción: This program computes compound interest for an interest rate of
                5% using only integers.
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

   int principalInCents = 100000;
   int dollars;
   int cents;
   double rate = .05;

   printf("%4s%21s\n", "Year", "Amount on deposit");

   for (unsigned int year = 1; year <= 10; ++year) {

      int amount = principalInCents * pow(1.0 + rate, year);

      dollars = amount / 100;
      cents = amount % 100;

      printf("%4u%18.2d.", year, dollars);

      if (cents < 10) {
         printf("0%d\n", cents);
      } else {
         printf("%d\n", cents);        
      }

   }

   return 0;

} 