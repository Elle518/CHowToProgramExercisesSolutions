/*
       Program: Ch4_Ex4_38_TheTwelveDaysOfChristmasSong.c
   Descripción: This program uses iteration and switch statements to print the
                song “The Twelve Days of Christmas.” One switch statement should
                be used to print the day (i.e., “first,” “second,” etc.). A
                separate switch statement should be used to print the remainder
                of each verse.
         Autor: Elle518

                v1.0
                This code is in the public domain.
*/

#include <stdio.h>

int main(void) {
   
   int day;

   for (day = 1; day <= 12; day++) {

      switch (day) {
         case 1:
            puts("On the first day of Christmas");
            break;
         case 2:
            puts("On the second day of Christmas");
            break;
         case 3:
            puts("On the third day of Christmas");
            break;
         case 4:
            puts("On the fourth day of Christmas");
            break;
         case 5:
            puts("On the fifth day of Christmas");
            break;
         case 6:
            puts("On the sixth day of Christmas");
            break;
         case 7:
            puts("On the seventh day of Christmas");
            break;
         case 8:
            puts("On the eighth day of Christmas");
            break;
         case 9:
            puts("On the ninth day of Christmas");
            break;
         case 10:
            puts("On the tenth day of Christmas");
            break;
         case 11:
            puts("On the eleventh day of Christmas");
            break;
         case 12:
            puts("On the twelfth day of Christmas");
            break;
      }

      switch (day) {
         case 1:
            puts("my true love sent to me:");
            puts("A Partridge in a Pear Tree");
            break;
         case 2:
            puts("my true love sent to me:");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");
            break;
         case 3:
            puts("my true love sent to me:");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");            
            break;
         case 4:
            puts("my true love sent to me:");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");
            break;
         case 5:
            puts("my true love sent to me:");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");            
            break;
         case 6:
            puts("my true love sent to me:");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");            
            break;
         case 7:
            puts("my true love sent to me:");
            puts("Seven Swans a Swimming");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");           
            break;
         case 8:
            puts("my true love sent to me:");
            puts("Eight Maids a Milking");
            puts("Seven Swans a Swimming");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");            
            break;
         case 9:
            puts("my true love sent to me:");
            puts("Nine Ladies Dancing");
            puts("Eight Maids a Milking");
            puts("Seven Swans a Swimming");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");            
            break;
         case 10:
            puts("my true love sent to me:");
            puts("Ten Lords a Leaping");
            puts("Nine Ladies Dancing");
            puts("Eight Maids a Milking");
            puts("Seven Swans a Swimming");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");            
            break;
         case 11:
            puts("my true love sent to me:");
            puts("Eleven Pipers Piping");
            puts("Ten Lords a Leaping");
            puts("Nine Ladies Dancing");
            puts("Eight Maids a Milking");
            puts("Seven Swans a Swimming");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");
            break;
         case 12:
            puts("my true love sent to me:");
            puts("Twelve Drummers Drumming");
            puts("Eleven Pipers Piping");
            puts("Ten Lords a Leaping");
            puts("Nine Ladies Dancing");
            puts("Eight Maids a Milking");
            puts("Seven Swans a Swimming");
            puts("Six Geese a Laying");
            puts("Five Golden Rings");
            puts("Four Calling Birds");
            puts("Three French Hens");
            puts("Two Turtle Doves");
            puts("and a Partridge in a Pear Tree");
            break;
      }

      puts("");
   }

   return 0;

}