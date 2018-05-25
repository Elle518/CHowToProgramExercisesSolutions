/*
       Program: Ch2_Ex2_32_CarPoolSavings.c
   Descripción: This program calculates your daily driving cost, so that you can
                estimate how much money could be saved by car pooling, which also
                has other advantages such as reducing carbon emissions and reducing
                traffic congestion. The application should input the following
                information and display the user’s cost per day of driving to work:
               
                  a) Total miles driven per day.
                  b) Cost per gallon of gasoline.
                  c) Average miles per gallon.
                  d) Parking fees per day.
                  e) Tolls per day.

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int milesDrivenPerDay;
   int costPerGallon;
   int milesPerGallon;
   int parkingFeesPerDay;
   int tollsPerDay;
   int costInGasolinePerDay;
   int totalDrivingCost;

   puts("Please, enter total miles driven per day:");
   scanf("%d", &costPerGallon);

   puts("Please, enter the cost per gallon of gasoline:");
   scanf("%d", &milesDrivenPerDay);

   puts("Please, enter average miles per gallon:");
   scanf("%d", &milesPerGallon);

   puts("Please, enter the parking fees per day:");
   scanf("%d", &parkingFeesPerDay);

   puts("Pleasne, enter the tolls per day:");
   scanf("%d", &tollsPerDay);

   costInGasolinePerDay = milesDrivenPerDay * costPerGallon / milesPerGallon; 

   totalDrivingCost = costInGasolinePerDay + parkingFeesPerDay + tollsPerDay;

   printf("Your daily driving cost is %d $.\n", totalDrivingCost);

   return 0;

}