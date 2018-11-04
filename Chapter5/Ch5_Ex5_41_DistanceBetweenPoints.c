/*
       Program: Ch5_Ex5_41_DistanceBetweenPoints.c
   Descripción: This program contains a function a function distance that
                calculates the distance between two points (x1, y1) and(x2, y2).
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

double distance(double x1, double x2, double y1, double y2);

int main(void) {

   double x1, x2, y1, y2;

   printf("Please, enter first point: \n");
   scanf("%lf%lf", &x1, &y1);

   printf("Please, enter second point: \n");
   scanf("%lf%lf", &x2, &y2);

   printf("The distance between the two points is %.2lf.\n", distance(x1, x2, y1, y2));

   return 0;

}

double distance(double x1, double x2, double y1, double y2) {

   return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

}