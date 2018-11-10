/*
       Program: Ch6_Ex6_14_MeanMedianAndMode.c
   Descripción: This program computes the mean, median and mode of the 99 values
                of a survey. Each response is a number from 1 to 9. 
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#define SIZE 99

void mean(const unsigned int answer[]);
void median(unsigned int answer[]);
void mode(unsigned int freq[], const unsigned int answer[]);
void bubbleSort(unsigned int a[]);
void printArray(const unsigned int a[]);

int main(void) {

   unsigned int frequency[10] = {0};


unsigned int response[SIZE] =
   {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
    7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
    7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
    6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
    5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
    7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
    4, 5, 6, 1, 6, 5, 7, 8, 7};

   mean(response);
   median(response);
   mode(frequency, response);

   return 0;

}

// Calculate average of all response values
void mean(const unsigned int answer[]) {
   
   printf("%s\n%s\n%s\n", "********", " Mean", "********");
   unsigned int total = 0;

   for (size_t j = 0; j < SIZE; ++j) {
      total += answer[j];
   }

   printf("The mean is the average value of the data\n"
          "items. The mean is equal to the total of\n"
          "all the data items divided by the number\n"
          "of data items (%u). The mean value for\n"
          "this run is: %u / %u = %.4f\n\n",
          SIZE, total, SIZE, (double) total / SIZE);

}

// Sort array and determine median element's value
void median(unsigned int answer[]) {
   
   printf("\n%s\n%s\n%s\n%s",
          "********", " Median", "********",
          "The unsorted array of responses is");

   printArray(answer); // Output unsorted array

   bubbleSort(answer); // Sort array

   printf("%s", "\n\nThe sorted array is");

   printArray(answer); // Output sorted array

   // Handle if the array has a even or odd number of elements
   if (SIZE % 2 != 0) {
      printf("\n\nThe median is element %u of\n"
       "the sorted %u element array.\n"
       "For this run the median is %u\n\n",
       SIZE / 2, SIZE, answer[SIZE / 2]);
   } else {
      printf("\nThe median is the average of elements %u "
             "\nand %u of the sorted %u element array.\n"
             "For this run the median is %.1f\n\n",
             SIZE / 2, SIZE / 2 + 1, SIZE,
             (float)(answer[SIZE / 2] + answer[SIZE / 2 + 1]) / 2);
   }

}

// Determine most frequent response
void mode(unsigned int freq[], const unsigned int answer[]) {

   printf("\n%s\n%s\n%s\n","********", " Mode", "********");
   
   // Initialize frequencies to 0
   for (size_t rating = 1; rating <= 9; ++rating) {
      freq[rating] = 0;
   }
   
   // Summarize frequencies
   for (size_t j = 0; j < SIZE; ++j) {
      ++freq[answer[j]];
   }

   // Output headers for result columns
   printf("%s%11s%19s\n",
          "Response", "Frequency", "Histogram");

   // Output results
   unsigned int largest = 0; // Represents largest frequency
   unsigned int modeValues[10] = {0}; // Represents most frequent responses

   for (size_t rating = 1; rating <= 9; ++rating) {

      printf("%8lu%11u          ", rating, freq[rating]);

      // Keep track of mode value and largest frequency value
      if (freq[rating] > largest) {
         largest = freq[rating];

         for (size_t rating = 1; rating <= 9; ++rating) {
            modeValues[rating] = 0;
         }

         modeValues[rating] = rating;

      // Handle a tie for the mode value
      } else if (freq[rating] == largest) {
         modeValues[rating] = rating;
      }

      // Output histogram bar representing frequency value
      for (unsigned int h = 1; h <= freq[rating]; ++h) {
         printf("%s", "*");
      }

      puts("");

   }

   // Display the mode value
   printf("\nThe mode is the most frequent value.\n"
          "For this run the mode(s) is/are:\n");
   
   for (unsigned int j = 0; j < 10; ++j){

      if (modeValues[j] > 0) { // Begin new line every 20 values
         printf("   %u which occurred %u times.\n", modeValues[j], largest);
      }

   }   

}

// Function that sorts an array with bubble sort algorithm
void bubbleSort(unsigned int a[]) {
   
   // Loop to control number of passes
   for (unsigned int pass = 1; pass < SIZE; ++pass) {

      // Loop to control number of comparisons per pass
      for (size_t j = 0; j < SIZE - 1; ++j) {

         // Swap elements if out of order
         if (a[j]>a[j+1]){
            unsigned int hold = a[j];
            a[j]=a[j+1];
            a[j+1]=hold;
         }

      }

   }

}

// Output array contents (20 values per row)
void printArray(const unsigned int a[]) {
   
   // output array contents
   for (size_t j = 0; j < SIZE; ++j){

      if (j % 20 == 0) { // Begin new line every 20 values
         puts("");

      }
      
      printf("%2u", a[j]);
   }

}