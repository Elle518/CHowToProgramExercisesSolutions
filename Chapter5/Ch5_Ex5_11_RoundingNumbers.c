/*
       Program: Ch5_Ex5_11_RoundingNumbers.c
   Descripción: This program defines four functions to round a number in various
                ways.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

int roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

int main(void) {
   
   float number;

   puts("Please, enter the number to be rounded: ");
   scanf("%f", &number);

   printf("%f rounded to integer is %d\n", number, roundToInteger(number));
   printf("%f rounded to tenths is %.1f\n", number, roundToTenths(number));
   printf("%f rounded to hundreths is %.2f\n", number, roundToHundreths(number));
   printf("%f rounded to thousandths is %.3f\n", number, roundToThousandths(number));
   
   return 0;

}

int roundToInteger(float num) {
   int roundedNumber;
   roundedNumber = floor(num + .5);
   return roundedNumber;
}

float roundToTenths(float num) {
   float roundedNumber;
   roundedNumber = floor(num * 10 + .5) / 10;
   return roundedNumber;
}

float roundToHundreths(float num) {
   float roundedNumber;
   roundedNumber = floor(num * 100 + .5) / 100;
   return roundedNumber;
}

float roundToThousandths(float num) {
   float roundedNumber;
   roundedNumber = floor(num * 1000 + .5) / 1000;
   return roundedNumber;
}