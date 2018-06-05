/*
       Program: Ch3_Ex3_41_DiameterCircumferenceAreaOfCirle.c
   Descripción: This program reads the radius of a circle (as a float value) and
                computes and prints the diameter, the circumference and the area.
                Uses the value 3.14159 for π.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   float radius;
   float pi = 3.14159;

   puts("Please, enter the radius of the circle:");
   scanf("%f", &radius);

   printf("The diameter of the circle is %.2f.\n", 2 * radius);
   printf("The circumference is %.2f.\n", 2 * pi * radius);
   printf("And the area is %.2f.\n", pi * radius * radius);

   return 0;

}