/*
       Program: Ch5_Ex5_23_TimeInSeconds.c
   Descripción: This program takes the time as three integer arguments (for
                hours, minutes, and seconds) and returns the number of seconds
                since the last time the clock “struck 12.” Use this function to
                calculate the amount of time in seconds between two times, both
                of which are within one 12-hour cycle of the clock.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>
#include <stdlib.h>

unsigned int secondsPast(int h, int m, int s);

int main(void) {

   int hours;
   int minutes;
   int seconds;
   int time1;
   int time2;
   int difference;

   printf("Enter the first time as three integers: ");
   scanf("%d%d%d", &hours, &minutes, &seconds);

   time1 = secondsPast(hours, minutes, seconds);

   printf("Please, enter the second time as three integers: ");
   scanf("%d%d%d", &hours, &minutes, &seconds);

   time2 = secondsPast(hours, minutes, seconds);

   difference = abs(time1 - time2);

   printf( "The amount of time between both times is %d seconds\n", difference);

   return 0;

}

unsigned secondsPast(int h, int m, int s) {

   return 3600 * h + 60 * m + s;

} 