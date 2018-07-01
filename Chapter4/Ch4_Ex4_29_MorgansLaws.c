/*
       Program: Ch4_Ex4_29_MorgansLaws.c
   Descripción: Morgan's Laws state that the expression !(condition1 && condition2)
                is logically equivalent to the expression (!condition1 || !condition2).
                Also, the expression !(condition1 || condition2) is logically
                equivalent to the expression (!condition1 && !condition2).
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int x, y, a, b, g, i, j;

   // a)
   x = 1;
   y = 3;

   if ((!(x < 5) && !(y >= 7)) == (!(x < 5 || y >= 7))) {
      puts("!(x < 5) && !(y >= 7) and !(x < 5 || y >= 7) are equivalent.");
   } else {
      puts("!(x < 5) && !(y >= 7) and !(x < 5 || y >= 7) are not equivalent.");
   }

   puts("");

   // b)
   a = 1;
   b = 3;
   g = 5;

   if ((!(a == b) || !(g != 5)) == (!(a == b && g != 5))) {
      puts("!(a == b) || !(g != 5) and !(a == b && g != 5) are equivalent.");
   } else {
      puts("!(a == b) || !(g != 5) and !(a == b && g != 5) are not equivalent.");
   }

   puts("");

   // c)
   x = 1;
   y = 3;

   if ((!(x <= 8 && y > 4)) == (!(x <= 8) || !(y > 4))) {
      puts("!(x <= 8 && y > 4) and !(x <= 8) || !(y > 4) are equivalent.");
   } else {
      puts("!(x <= 8 && y > 4) and !(x <= 8) || !(y > 4) are not equivalent.");
   }

   puts("");

   // d)
   i = 1;
   j = 3;

   if ((!(i > 4 || j <= 6)) == (!(i > 4) && !(j <= 6))) {
      puts("!(i > 4 || j <= 6) and !(i > 4) && !(j <= 6) are equivalent.");
   } else {
      puts("!(i > 4 || j <= 6) and !(i > 4) && !(j <= 6) are not equivalent.");
   }

   return 0;

}