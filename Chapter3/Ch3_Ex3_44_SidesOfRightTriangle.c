/*
       Program: Ch3_Ex3_44_SidesOfRightTriangle.c
   Descripción: This program reads three nonzero integers and determines and
                prints whether they could be the sides of a right triangle. The
                Pythagorean theorem states that:

                  c^2 = a^2 + b^2
                
                where c is the length of the hypotenuse (the side opposite the
                right angle), and a and b are the lengths of the remaining two
                sides.  

         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   int sideA, sideB, sideC, aux;

   puts("Please, enter three nonzero integer values:");
   scanf("%d%d%d", &sideA, &sideB, &sideC);

   if (sideB > sideC) {
      aux = sideC;
      sideC = sideB;
      sideB = aux;
      printf("Side B %d Side c %d\n", sideB, sideC);
   }

   if (sideA > sideC) {
      aux = sideC;
      sideC = sideA;
      sideA = aux;
      printf("Side A %d Side c %d\n", sideA, sideC);
   }

   if (sideC * sideC == sideA * sideA + sideB * sideB) {
      puts("They could represent a right triangle.");
   } else {
      puts("They couldn't represent a right triangle.");
   }

   return 0;

}