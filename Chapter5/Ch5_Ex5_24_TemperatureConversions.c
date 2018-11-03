/*
       Program: Ch5_Ex5_24_TemperatureConversions.c
   Descripción: This program prints charts showing the Fahrenheit equivalents of
                all Celsius temperatures from 0 to 100 degrees, and the Celsius
                equivalents of all Fahrenheit temperatures from 32 to 212
                degrees.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

double toCelsius(double df);
double toFahrenheit(double dc);

int main(void) {
   
   puts("Celsius\tFahrenheit");
   
   for (int i = 0; i <= 100; i++) {
      printf("%d\t%.2f\n", i, toCelsius(i));
   }

   puts("\nFahrenheit\tCelsius");
   
   for (int i = 32; i <= 212; i++) {
      printf("%d\t\t%.2f\n", i, toFahrenheit(i));
   }

   return 0;

}

double toCelsius(double fd) {
   return (fd - 32) / 1.8;
}

double toFahrenheit(double cd) {
   return (cd * 1.8) + 32.00;
}