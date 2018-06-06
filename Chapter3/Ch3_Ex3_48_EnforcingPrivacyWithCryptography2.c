/*
       Program: Ch3_Ex3_48_EnforcingPrivacyWithCryptography2.c
   Descripción: This program inputs an encrypted four-digit integer and decrypts
                it (by reversing the encryption scheme used in exercise 
                Ch3_Ex3_48_EnforcingPrivacyWithCryptography1.c) to form the
                original number.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int encryptedNumber;
   int desencryptedDigit;
   int digit;
   int divisor = 1000;
   int i = 1;
   int firstDigit, seconDigit, thirdDigit, fourthDigit;

   puts("Please, enter the encrypted number:");
   scanf("%4d", &encryptedNumber);

   while (i <= 4) {

      digit = encryptedNumber / divisor;

      if (digit >=0 && digit <= 6) {
         desencryptedDigit = digit + 10 - 7;
      } else {
         desencryptedDigit = digit - 7;
      }

      encryptedNumber = encryptedNumber % divisor;
      divisor = divisor / 10;

      if (i == 1) {
         thirdDigit = desencryptedDigit;
      } else if (i == 2) {
         fourthDigit = desencryptedDigit;
      } else if (i == 3) {
         firstDigit = desencryptedDigit;
      } else {
         seconDigit = desencryptedDigit;
      }

      i++;

   }

   printf("The original number is %d%d%d%d.\n", firstDigit, seconDigit, thirdDigit, fourthDigit);

   return 0;

}