/*
       Program: Ch5_Ex5_9_ParkingCharges.c
   Descripción: This program calculates and print the parking charges for each
                of three customers who parked their cars in a garage.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

float calculateCharges(float hours);

int main(void) {

   float hoursCustomer1;
   float hoursCustomer2;
   float hoursCustomer3;
   float totalHours;
   float totalCharge;

   puts("Please, enter the our for the three customers: ");
   scanf("%f%f%f", &hoursCustomer1, &hoursCustomer2, &hoursCustomer3);

   puts("Car     Hours   Charge");
   printf("1    %8.1f%8.2f\n", hoursCustomer1, calculateCharges(hoursCustomer1));
   printf("2    %8.1f%8.2f\n", hoursCustomer2, calculateCharges(hoursCustomer2));
   printf("3    %8.1f%8.2f\n", hoursCustomer3, calculateCharges(hoursCustomer3));

   totalHours = hoursCustomer1 + hoursCustomer2 + hoursCustomer3;
   totalCharge = calculateCharges(hoursCustomer1) + calculateCharges(hoursCustomer2) + calculateCharges(hoursCustomer3);
   
   printf("TOTAL%8.1f%8.2f\n", totalHours, totalCharge);

   return 0;

}

float calculateCharges(float hours) {
   float charge;

   if (hours <= 3) {
      charge = 2.00;
   } else {
      charge = 2.00 + ceil(hours - 3) * 0.5;
   }

   if (charge > 10.00) {
      charge = 10.00;
   }

   return charge;
}