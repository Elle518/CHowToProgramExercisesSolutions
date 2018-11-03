/*
       Program: Ch5_Ex5_15_HypotenuseCalculations.c
   Descripción: This program calculates the length of the hypotenuse of a right
                triangle when the other two sides are given.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

double calculateHypotenuse(double side1, double side2);

int main(void) {
   
   double side1;
   double side2;

   puts("Please, enter the sides of the right triangle: ");
   scanf("%lf%lf", &side1, &side2);

   printf("The hypotenuse of the triangle is %.1f\n", calculateHypotenuse(side1, side2));

   return 0;

}

double calculateHypotenuse(double s1, double s2) {
   return sqrt(pow(s1, 2) + pow(s2, 2));
}