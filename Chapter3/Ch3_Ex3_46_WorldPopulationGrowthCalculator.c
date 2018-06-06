/*
       Program: Ch3_Ex3_46_WorldPopulationGrowthCalculator.c
   Descripción: This program inputs the current world population and the annual
                world population growth rate and then displays the estimated
                world population after one, two, three, four and five years.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

// We can estimate the world population after certain years applying the formula:

//                            P(t) = Po + (Po * r * t)

// Where P(t) = final population
//       Po = initial population
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
         estimatedWorldPopulation = ((annualGrowthRate / 100) * currentWorldPopulation * year) + currentWorldPopulation;
         printf("The estimated world population after %d year would be %.0f.\n", year, estimatedWorldPopulation);
         year++;
   }

   return 0;
}