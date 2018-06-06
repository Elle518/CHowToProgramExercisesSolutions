/*
       Program: Ch3_Ex3_48_EnforcingPrivacyWithCryptography1.c
   Descripción: This program reads a four-digit integer entered by the user and
                encrypts it as follows: Replaces each digit with the result of
                adding 7 to the digit and getting the remainder after dividing
                the new value by 10. Then swaps the first digit with the third,
                and swaps the second digit with the fourth. Then prints the
                encrypted integer.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int number;
   int encryptedDigit;
   int divisor = 1000;
   int i = 1;
   int firstDigit, seconDigit, thirdDigit, fourthDigit;

   puts("Please, enter a four-digit integer:");
   scanf("%4d", &number);

   while (i <= 4) {

      encryptedDigit = (number/divisor + 7) % 10;
      number = number % divisor;
      divisor = divisor / 10;

      if (i == 1) {
         thirdDigit = encryptedDigit;
      } else if (i == 2) {
         fourthDigit = encryptedDigit;
      } else if (i == 3) {
         firstDigit = encryptedDigit;
      } else {
         seconDigit = encryptedDigit;
      }

      i++;

   }

   printf("The encrypted integer is %d%d%d%d.\n", firstDigit,
                                                  seconDigit,
                                                  thirdDigit,
                                                  fourthDigit);

   return 0;

}