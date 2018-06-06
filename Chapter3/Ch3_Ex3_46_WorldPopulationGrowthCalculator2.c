/*
       Program: Ch3_Ex3_46_WorldPopulationGrowthCalculator2.c
   Descripción: This program inputs the current world population and the annual
                world population growth rate and then displays the estimated
                world population after one, two, three, four and five years.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

// Under normal circumstances, animal populations grow continuously, so we can
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

   float currentWorldPopulation;
   float annualGrowthRate;
   float estimatedWorldPopulation;
   int year = 1;

   puts("Please, enter the current world population:");
   scanf("%f", &currentWorldPopulation);
   puts("Please, enter the annual world population growth rate in %:");
   scanf("%f", &annualGrowthRate);

   while (year <= 5) {
         estimatedWorldPopulation = currentWorldPopulation * pow(2.718281, ((annualGrowthRate / 100) * year));
         printf("The estimated world population after %d year is %.0f.\n", year, estimatedWorldPopulation);
         year++;
   }

   return 0;

}