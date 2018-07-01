/*
       Program: Ch4_Ex4_22_AverageClass.c
   Descripción: This program counts the number of each different letter grade
                students earned on an exam and then calculates the average grade
                for the class.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {

   unsigned int aCount = 0; 
   unsigned int bCount = 0; 
   unsigned int cCount = 0; 
   unsigned int dCount = 0;
   unsigned int fCount = 0;
   float average;

   puts("Enter the letter grades." );
   puts("Enter the EOF character to end input." );
   int grade;

   while ((grade = getchar()) != EOF) {
      
      switch (grade) {

         case 'A':
         case 'a':
            ++aCount; 
            break;

         case 'B':
         case 'b':
            ++bCount;
            break;

         case 'C':
         case 'c':
            ++cCount; 
            break;

         case 'D':
         case 'd':
            ++dCount; 
            break;

         case 'F':
         case 'f':
            ++fCount;
            break; 

         case '\n': // ignore newlines in input
         case '\t': // ignore tabs in input
         case ' ':  // ignore spaces in input
            break; 

         default: // catch all other characters
            printf("%s", "Incorrect letter grade entered."); 
            puts(" Enter a new grade."); 
            break;
      } 
   }

   puts("\nTotals for each letter grade are:");
   printf("A: %u\n", aCount);
   printf("B: %u\n", bCount); 
   printf("C: %u\n", cCount); 
   printf("D: %u\n", dCount); 
   printf("F: %u\n", fCount);

   average = (float)(5 * aCount + 4 * bCount + 3 * cCount + 2 * dCount + fCount) /
             (aCount + bCount + cCount + dCount + fCount);

   if (average <= 5 && average > 4.2) {
      puts("The average grade is A.");
   } else if (average <= 4.2 && average > 3.4) {
      puts("The average grade is B.");
   } else if (average <= 3.4 && average > 2.6) {
      puts("The average grade is C.");
   } else if (average <= 2.6 && average > 1.8 ) {
      puts("The average grade is D.");
   } else {
      puts("The average grade is F.");
   }
   
   return 0;

} 