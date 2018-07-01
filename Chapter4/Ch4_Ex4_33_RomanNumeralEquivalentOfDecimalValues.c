/*
       Program: Ch4_Ex4_33_RomanNumeralEquivalentOfDecimalValues.c
   Descripción: This program prints a table of all the Roman-numeral equivalents
                of the decimal numbers in the range 1 to 100.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int decimalNumber;
   int tens;
   int units;

   puts("decimal\tRoman");

   for (decimalNumber = 1; decimalNumber <= 100; decimalNumber++) {
      
      printf("%d\t", decimalNumber);      
      tens = decimalNumber / 10;

      switch (tens) {
         case 0:
            break;
         case 1:
            printf("%s", "X");
            break;
         case 2:
            printf("%s", "XX");
            break;
         case 3:
            printf("%s", "XXX");
            break;
         case 4:
            printf("%s", "XL");
            break;
         case 5:
            printf("%s", "X");
            break;
         case 6:
            printf("%s", "LX");
            break;
         case 7:
            printf("%s", "LXX");
            break;
         case 8:
            printf("%s", "LXXX");
            break;
         case 9:
            printf("%s", "XC");
            break;
         case 10:
            printf("%s", "C");
            break;                          
      }

      units = decimalNumber % 10;
      switch (units) {
         case 0:
            break;
         case 1:
            printf("%s", "I");
            break;
         case 2:
            printf("%s", "II");
            break;
         case 3:
            printf("%s", "III");
            break;
         case 4:
            printf("%s", "IV");
            break;
         case 5:
            printf("%s", "V");
            break;
         case 6:
            printf("%s", "VI");
            break;
         case 7:
            printf("%s", "VII");
            break;
         case 8:
            printf("%s", "VIII");
            break;
         case 9:
            printf("%s", "IX");
            break;
         case 10:
            printf("%s", "X");
            break;                          
      }

      printf("%s", "\n");
   
   }

   return 0;

}