/*
       Program: Ch5_Ex5_45_TestingMathLibraryFunctions.c
   Descripción: This program tests some math library functions. Exercises each
                of these functions by printing out tables of return values for a
                diversity of argument values.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <math.h>

int main(void) {

   int i;
   int count;
   double j;

   for (count = 1; count <= 13; count++) {

      switch (count) {

         case 1:
            printf("Argum");
            for (i = 1; i <= 5; i++) {
               printf("%10d", i);
            }
            break;

         case 2:
            printf("\nsqrt(x) ");
            for (i = 1; i <= 5; i++) {
               printf("%10.2lf", sqrt(i));
            }
            break;

         case 3:
            printf("exp(x)  ");
            for(i = 1; i <= 5; i++) {
               printf("%10.2lf", exp(i));
            }
            break;

         case 4:
            printf("log(x)  ");
            for (i = 1; i <= 5; i++) {
               printf("%10.2lf", log(i));
            }
            break;
         
         case 5:
            printf("log10(x)");
            for (i = 1; i <= 5; i++) {
               printf("%10.2lf", log10(i));
            }
            break;
         
         case 6:
            printf("pow(2,x)");
            for(i = 1; i <= 5; i++){
               printf("%10.2lf", pow(2, i));
            }
            break;

         case 7:
            printf("\n\nArgum   ");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", j);
            }
            break;

         case 8:
            printf("\nfabs(x) ");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", fabs(j));
            }
            break;

         case 9:
            printf("ceil(x) ");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", ceil(j));
            }
            break;
         
         case 10:
            printf("floor(x)");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", floor(j));
            }
            break;
         
         case 11:
            printf("sin(x)  ");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", sin(j));
            }
            break;
         
         case 12:
            printf("cos(x)  ");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", cos(j));
            }
            break;
         
         case 13:
            printf("tan(x)  ");
            for (j = -1.5; j < 3.0; j += 1.1) {
               printf("%10.2lf ", tan(j));
            }
            break;
      }

      printf("\n");

   }

   return 0;

}