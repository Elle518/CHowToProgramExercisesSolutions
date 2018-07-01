/*
       Program: Ch5_Ex5_3_TestMathExamples.c
   Descripción: This program tests whether the examples of the math library
                function calls shown in Fig. 5.2 actually produce the indicated
                results.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
   
   printf("sqrt(%.1f) is %.1f\n", 900.0, sqrt(900.0));
   printf("sqrt(%.1f) is %.1f\n", 9.0, sqrt(9.0));

   puts("");

   printf("cbrt(%.1f) is %.1f\n", 27.0, cbrt(27.0));
   printf("cbrt(%.1f) is %.1f\n", -8.0, cbrt(-8.0));

   puts("");

   printf("exp(%.1f) is %f\n", 1.0, exp(1.0));
   printf("exp(%.1f) is %f\n", 2.0, exp(2.0));

   puts("");

   printf("log(%f) is %.1f\n", 2.718282, log(2.718282));
   printf("log(%f) is %.1f\n", 7.389056, log(7.389056));

   puts("");

   printf("log10(%.1f) is %.1f\n", 1.0, log10(1.0));
   printf("log10(%.1f) is %.1f\n", 10.0, log10(10.0));
   printf("log10(%.1f) is %.1f\n", 100.0, log10(100.0));

   puts("");

   printf("fabs(%.1f) is %.1f\n", 13.5, fabs(13.5));
   printf("fabs(%.1f) is %.1f\n", 0.0, fabs(0.0));
   printf("fabs(%.1f) is %.1f\n", -13.5, fabs(-13.5));

   puts("");

   printf("ceil(%.1f) is %.1f\n", 9.2, ceil(9.2));
   printf("ceil(%.1f) is %.1f\n", -9.8, ceil(-9.8));

   puts("");

   printf("floor(%.1f) is %.1f\n", 9.2, floor(9.2));
   printf("floor(%.1f) is %.1f\n", -9.8, floor(-9.8));

   puts("");

   printf("pow(%.0f, %.0f) is %.1f\n", 2.0, 7.0, pow(2.0, 7.0));
   printf("pow(%.0f, %.1f) is %.1f\n", 9.0, .5, pow(9.0, .5));

   puts("");

   printf("fmod(%.3f, %.3f) is %.3f\n", 13.657, 2.333, fmod(13.657, 2.333));

    puts("");

   printf("sin(%.1f) is %.1f\n", 0.0, sin(0.0));
   printf("cos(%.1f) is %.1f\n", 0.0, cos(0.0));
   printf("tan(%.1f) is %.1f\n", 0.0, tan(0.0));  

   return 0;

}