/*
       Program: Ch3_Ex3_27_ValidatingUserInput.c
   Descripción: This program validates its inputs. On any input, if the value
                entered is other than 1 or 2, keep looping until the user enters
                a correct value.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   unsigned int passes = 0;
   unsigned int failures = 0;
   unsigned int student = 1;
   int result;

   while (student <= 10) {
      printf("%s", "Enter result (1 = pass, 2 = fail): ");
      scanf("%d", &result);

      while (result != 1 && result != 2) {
         printf("%s\n", "Invalid result");
         printf("%s", "Enter result (1 = pass, 2 = fail): ");
         scanf("%d", &result);
      }

      if (result == 1) {     
         passes = passes + 1;
      } else {
         failures = failures + 1;
      }

      student++; 
   }

   printf("Passed %u\n", passes);
   printf("Failed %u\n", failures);
 
   if (passes > 8) {
      puts("Bonus to instructor!");
   }

   return 0;

}