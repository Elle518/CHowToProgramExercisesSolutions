/*
       Program: Ch4_Ex4_40_WorldPopulationGrowth.c
   Descripción: This program calculates world population growth each year for
                the next 75 years, using the simplifying assumption that the
                current growth rate will stay constant, and prints the results
                in a table. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

// Under normal circumstances, human population grows continuously, so we can
// apply the exponential growth formula:

//                            P(t) = Po * e^(r*t)

// Where P(t) = final population
//       Po = initial population
//       e = 2,718281
//       r = annual world population growth rate
//       t = years

#include <stdio.h>
#include <math.h>

int main(void) {

   long currentWorldPopulation = 7632819325;
   float annualGrowthRate = 1.09;
   long futurePopulation;
   int increase;
   long aux;
   
   puts("Year\tPopulation\tIncrease");

   aux = currentWorldPopulation;

   for (int year = 1; year <= 75; year++) {
      futurePopulation = currentWorldPopulation * pow(2.718281, ((annualGrowthRate / 100) * year));
      increase = futurePopulation - aux;
      printf("%d\t%ld\t%d\n", year, futurePopulation, increase);
      aux = futurePopulation;
   }

   for (int year = 1; year <= 75; year++) {
      futurePopulation = currentWorldPopulation * pow(2.718281, ((annualGrowthRate / 100) * year));
      if (futurePopulation >= 2 * currentWorldPopulation) {
         printf("In year %d the population would be double what it is today.\n", year);
         break;
      }
   }

   return 0;

}